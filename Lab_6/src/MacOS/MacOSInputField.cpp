#include "../inc/MacOS/MacOSInputField.h"

void MacOSInputField::setText(const std::string &text) {
    std::cout << "Вызван метод setText у контролла MacOSTextBox" << std::endl;
}

std::string MacOSInputField::getText() const {
    std::cout << "Вызван метод getText у контролла MacOSTextBox" << std::endl;
    return "Пример текста в TextBox";
}

void MacOSInputField::onValueChanged() {
    std::cout << "Вызван метод onValueChanged у контролла MacOSTextBox" << std::endl;
}

void MacOSInputField::setPosition(int x, int y) {
    std::cout << "Вызван метод setPosition у контролла MacOSTextBox" << std::endl;
}

std::pair<int, int> MacOSInputField::getPosition() const {
    std::cout << "Вызван метод getPosition у контролла MacOSTextBox" << std::endl;
    return {0, 0};
}