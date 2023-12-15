#include "../inc/Command/TextCommand.h"

void InstractionText::execute(){
    std::cout << "Print: " << m_data << std::endl;
}

void InstractionText::undo(){
    std::cout << "Undo: " << m_data << std::endl;
}