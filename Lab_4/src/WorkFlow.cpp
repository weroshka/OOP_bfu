#pragma once

#include <WorkFlow.h>

void WorkFlow::PressKey(const std::string &key) {
    actions.push_back(key);
}

void WorkFlow::PressKeyLong(const std::string &key, int time) {
    std::this_thread::sleep_for(std::chrono::seconds(time));
    actions.push_back(key);
}

bool WorkFlow::UndoLastAction() {
    if (!actions.empty()) {
        actions.pop_back();
        return true;
    }
    return false;
}

void WorkFlow::PrintActions() const {
    for (const std::string &action: actions) {
        std::cout << GetRemappedKey(action) << " ";
    }
    std::cout << std::endl;
}

void WorkFlow::RemapKey(const std::string &originalKey, const std::string &newKey) {
    keyMappings[originalKey] = newKey;
}

std::string WorkFlow::GetRemappedKey(const std::string &originalKey) const {
    if (keyMappings.count(originalKey) > 0) {
        return keyMappings.at(originalKey);
    }
    return originalKey;
}