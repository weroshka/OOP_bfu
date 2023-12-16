#include "../inc/Linux/LinuxInputField.h"

void LinuxInputField::setText(const std::string &text) {
    std::cout << "Вызван метод setText у контролла LinuxTextBox" << std::endl;
}

std::string LinuxInputField::getText() const {
    std::cout << "Вызван метод getText у контролла LinuxTextBox" << std::endl;
    return "Пример текста в TextBox";
}

void LinuxInputField::onValueChanged() {
    std::cout << "Вызван метод onValueChanged у контролла LinuxTextBox" << std::endl;
}

void LinuxInputField::setPosition(int x, int y) {
    std::cout << "Вызван метод setPosition у контролла LinuxTextBox" << std::endl;
}

std::pair<int, int> LinuxInputField::getPosition() const {
    std::cout << "Вызван метод getPosition у контролла LinuxTextBox" << std::endl;
    return {0, 0};
}