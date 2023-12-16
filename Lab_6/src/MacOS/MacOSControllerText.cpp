#include "../inc/MacOS/MacOSControllerText.h"

void MacOSControllerText::setText(const std::string &text) {
    std::cout << "Вызван метод setText у контролла MacOSLabel" << std::endl;
}

std::string MacOSControllerText::getText() const {
    std::cout << "Вызван метод getText у контролла MacOSLabel" << std::endl;
    return "Пример текста для Label";
}

void MacOSControllerText::setPosition(int x, int y) {
    std::cout << "Вызван метод setPosition у контролла MacOSLabel" << std::endl;
}

std::pair<int, int> MacOSControllerText::getPosition() const {
    std::cout << "Вызван метод getPosition у контролла MacOSLabel" << std::endl;
    return {0, 0};
}