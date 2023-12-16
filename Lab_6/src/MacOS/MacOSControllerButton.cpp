#include "../inc/MacOS/MacOSControllerButton.h"

void MacOSControllerButton::setText(const std::string &text) {
    std::cout << "Вызван метод setText у контролла MacOSButton" << std::endl;
}

std::string MacOSControllerButton::getText() const {
    std::cout << "Вызван метод getText у контролла MacOSButton" << std::endl;
    return "Пример текста";
}

void MacOSControllerButton::click() {
    std::cout << "Вызван метод click у контролла MacOSButton" << std::endl;
}

void MacOSControllerButton::setPosition(int x, int y) {
    std::cout << "Вызван метод setPosition у контролла MacOSButton" << std::endl;
}

std::pair<int, int> MacOSControllerButton::getPosition() const {
    std::cout << "Вызван метод getPosition у контролла MacOSButton" << std::endl;
    return {0, 0};
}