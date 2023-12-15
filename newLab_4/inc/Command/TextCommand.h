#pragma once

#include "Command.h"
#include <utility>

class InstractionText : public Command {
private:
    std::string m_data;
public:
    explicit InstractionText(std::string data) : m_data(std::move(data)) {}

    void execute();
    void undo();
};