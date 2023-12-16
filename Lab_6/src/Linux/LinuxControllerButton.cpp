#include "../inc/Linux/LinuxControllerButton.h"

void LinuxControllerButton::setText(const std::string &text) {
    std::cout << "������ ����� setText � ��������� LinuxButton" << std::endl;
}

std::string LinuxControllerButton::getText() const {
    std::cout << "������ ����� getText � ��������� LinuxButton" << std::endl;
    return "������ ������";
}

void LinuxControllerButton::click() {
    std::cout << "������ ����� click � ��������� LinuxButton" << std::endl;
}

void LinuxControllerButton::setPosition(int x, int y) {
    std::cout << "������ ����� setPosition � ��������� LinuxButton" << std::endl;
}

std::pair<int, int> LinuxControllerButton::getPosition() const {
    std::cout << "������ ����� getPosition � ��������� LinuxButton" << std::endl;
    return {0, 0};
}