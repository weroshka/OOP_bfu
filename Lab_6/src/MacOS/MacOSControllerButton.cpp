#include "../inc/MacOS/MacOSControllerButton.h"

void MacOSControllerButton::setText(const std::string &text) {
    std::cout << "������ ����� setText � ��������� MacOSButton" << std::endl;
}

std::string MacOSControllerButton::getText() const {
    std::cout << "������ ����� getText � ��������� MacOSButton" << std::endl;
    return "������ ������";
}

void MacOSControllerButton::click() {
    std::cout << "������ ����� click � ��������� MacOSButton" << std::endl;
}

void MacOSControllerButton::setPosition(int x, int y) {
    std::cout << "������ ����� setPosition � ��������� MacOSButton" << std::endl;
}

std::pair<int, int> MacOSControllerButton::getPosition() const {
    std::cout << "������ ����� getPosition � ��������� MacOSButton" << std::endl;
    return {0, 0};
}