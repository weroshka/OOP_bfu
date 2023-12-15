#pragma once
#include "TextCommand.h"

class GroupCommandText {
private:
    std::vector<InstractionText> m_commands = {};
public:
    GroupCommandText() = default;

    explicit GroupCommandText(const std::vector<InstractionText>& commands);
    void addCommand(const InstractionText& command);
    void undoLastCommand();

    void execute();

    void undo();

    bool isEmpty() const;

    [[nodiscard]] const std::vector<InstractionText> &getCommands() const;

};

