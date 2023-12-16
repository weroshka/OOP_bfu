#include "../inc/Linux/LinuxControllerButton.h"

void LinuxControllerButton::setText(const std::string &text) {
    std::cout << "Вызван метод setText у контролла LinuxButton" << std::endl;
}

std::string LinuxControllerButton::getText() const {
    std::cout << "Вызван метод getText у контролла LinuxButton" << std::endl;
    return "Пример текста";
}

void LinuxControllerButton::click() {
    std::cout << "Вызван метод click у контролла LinuxButton" << std::endl;
}

void LinuxControllerButton::setPosition(int x, int y) {
    std::cout << "Вызван метод setPosition у контролла LinuxButton" << std::endl;
}

std::pair<int, int> LinuxControllerButton::getPosition() const {
    std::cout << "Вызван метод getPosition у контролла LinuxButton" << std::endl;
    return {0, 0};
}