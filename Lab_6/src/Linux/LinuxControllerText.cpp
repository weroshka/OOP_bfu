#include "../inc/Linux/LinuxControllerText.h"

void LinuxControllerText::setText(const std::string &text) {
    std::cout << "������ ����� setText � ��������� LinuxLabel" << std::endl;
}

std::string LinuxControllerText::getText() const {
    std::cout << "������ ����� getText � ��������� LinuxLabel" << std::endl;
    return "������ ������ ��� Label";
}

void LinuxControllerText::setPosition(int x, int y) {
    std::cout << "������ ����� setPosition � ��������� LinuxLabel" << std::endl;
}

std::pair<int, int> LinuxControllerText::getPosition() const {
    std::cout << "������ ����� getPosition � ��������� LinuxLabel" << std::endl;
    return {0, 0};
}