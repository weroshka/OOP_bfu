#pragma once

#include "WorkFlow.h"

void WorkFlow::PressKey(const std::string &key) {
    m_keyboard[GetChangedKey(key)].execute();
    m_history.push_back(m_keyboard[GetChangedKey(key)]);
}

void WorkFlow::PressKeyLong(const std::string &key, int time) {
    std::this_thread::sleep_for(std::chrono::seconds(time));
    m_keyboard[GetChangedKey(key)].execute();
}

bool WorkFlow::UndoLastAction() {
    if (!m_history.empty()) {
        m_history.back().undo();
        m_history.pop_back();
        return true;
    }
    return false;
}


void WorkFlow::RemapKey(const std::string &originalKey, const std::string &newKey) {
    keyMappings[originalKey] = newKey;
    GroupCommandText GroupCommandText = m_keyboard[originalKey];
    m_keyboard.erase(originalKey);
    m_keyboard[newKey] = GroupCommandText;
}

std::string WorkFlow::GetChangedKey(const std::string &originalKey) const {
    if (keyMappings.count(originalKey) > 0) {
        return keyMappings.at(originalKey);
    }
    return originalKey;
}

void WorkFlow::AddOneCommand(const std::string &key, const InstractionText &command) {
    if (m_keyboard.count(GetChangedKey(key)) > 0) {
        m_keyboard[GetChangedKey(key)].addCommand(command);
        return;
    }
    m_keyboard[key] = GroupCommandText({command});
}

void WorkFlow::AddCommandGroup(const std::string &key, const GroupCommandText &groupCommand) {
    if (m_keyboard.count(GetChangedKey(key)) > 0) {
        for (const auto& command :groupCommand.getCommands()) {
            m_keyboard[GetChangedKey(key)].addCommand(command);
        }
        return;
    }
    m_keyboard[GetChangedKey(key)] = groupCommand;
}

void WorkFlow::UndoCommand(const std::string &key) {
    if (m_keyboard.count(GetChangedKey(key)) > 0) {
        m_keyboard[GetChangedKey(key)].undo();
        if (m_keyboard[GetChangedKey(key)].isEmpty()) {
            m_keyboard.erase(GetChangedKey(key));
        }
    }
}