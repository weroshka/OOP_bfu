#include "../inc/MacOS/MacOSControllerText.h"

void MacOSControllerText::setText(const std::string &text) {
    std::cout << "������ ����� setText � ��������� MacOSLabel" << std::endl;
}

std::string MacOSControllerText::getText() const {
    std::cout << "������ ����� getText � ��������� MacOSLabel" << std::endl;
    return "������ ������ ��� Label";
}

void MacOSControllerText::setPosition(int x, int y) {
    std::cout << "������ ����� setPosition � ��������� MacOSLabel" << std::endl;
}

std::pair<int, int> MacOSControllerText::getPosition() const {
    std::cout << "������ ����� getPosition � ��������� MacOSLabel" << std::endl;
    return {0, 0};
}