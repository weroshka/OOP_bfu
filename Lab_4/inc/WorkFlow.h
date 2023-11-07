#pragma once

#include <iostream>
#include <vector>
#include <string>
#include <thread>
#include <map>

class WorkFlow {
private:
    std::vector<std::string> actions;
    std::map<std::string, std::string> keyMappings;

    [[nodiscard]] std::string GetRemappedKey(const std::string &originalKey) const;

public:
    void PressKey(const std::string &key);

    void PressKeyLong(const std::string &key, int time);

    bool UndoLastAction();

    void PrintActions() const;

    void RemapKey(const std::string &originalKey, const std::string &newKey);

};