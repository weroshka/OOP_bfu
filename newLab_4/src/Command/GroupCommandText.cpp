#include "../inc/Command/GroupCommandText.h"


GroupCommandText::GroupCommandText(const std::vector<InstractionText>& commands){
    for (auto& command:commands) {
        m_commands.push_back(command);
    }
}

void GroupCommandText::addCommand(const InstractionText& command) {
    m_commands.push_back(command);
}
void GroupCommandText::undoLastCommand(){

}

void GroupCommandText::execute() {
    for (Command& command: m_commands) {
        command.execute();
    }
}

void GroupCommandText::undo() {
    m_commands.back().undo();
    m_commands.pop_back();
}

bool GroupCommandText::isEmpty() const{
    return m_commands.empty();
}

const std::vector<InstractionText> &GroupCommandText::getCommands() const {
    return m_commands;
}
