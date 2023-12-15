#pragma once

#include <thread>
#include <map>

#include "Command/Command.h"
#include "Command/GroupCommandText.h"

class WorkFlow {
private:
    std::vector<GroupCommandText> m_history;
    std::map<std::string, GroupCommandText> m_keyboard;

    std::map<std::string, std::string> keyMappings;

    [[nodiscard]] std::string GetChangedKey(const std::string &originalKey) const;

public:
    void AddOneCommand(const std::string &key, const InstractionText &command);

    void AddCommandGroup(const std::string &key, const GroupCommandText &GroupCommandText);

    void UndoCommand(const std::string &key);

    void PressKey(const std::string &key);

    void PressKeyLong(const std::string &key, int time);

    bool UndoLastAction();

    void RemapKey(const std::string &originalKey, const std::string &newKey);

};