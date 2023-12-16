#include "../inc/Linux/LinuxControllerText.h"

void LinuxControllerText::setText(const std::string &text) {
    std::cout << "Вызван метод setText у контролла LinuxLabel" << std::endl;
}

std::string LinuxControllerText::getText() const {
    std::cout << "Вызван метод getText у контролла LinuxLabel" << std::endl;
    return "Пример текста для Label";
}

void LinuxControllerText::setPosition(int x, int y) {
    std::cout << "Вызван метод setPosition у контролла LinuxLabel" << std::endl;
}

std::pair<int, int> LinuxControllerText::getPosition() const {
    std::cout << "Вызван метод getPosition у контролла LinuxLabel" << std::endl;
    return {0, 0};
}