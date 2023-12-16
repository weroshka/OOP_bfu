#include "../inc/Linux/LinuxInputField.h"

void LinuxInputField::setText(const std::string &text) {
    std::cout << "������ ����� setText � ��������� LinuxTextBox" << std::endl;
}

std::string LinuxInputField::getText() const {
    std::cout << "������ ����� getText � ��������� LinuxTextBox" << std::endl;
    return "������ ������ � TextBox";
}

void LinuxInputField::onValueChanged() {
    std::cout << "������ ����� onValueChanged � ��������� LinuxTextBox" << std::endl;
}

void LinuxInputField::setPosition(int x, int y) {
    std::cout << "������ ����� setPosition � ��������� LinuxTextBox" << std::endl;
}

std::pair<int, int> LinuxInputField::getPosition() const {
    std::cout << "������ ����� getPosition � ��������� LinuxTextBox" << std::endl;
    return {0, 0};
}