#include "../inc/MacOS/MacOSInputField.h"

void MacOSInputField::setText(const std::string &text) {
    std::cout << "������ ����� setText � ��������� MacOSTextBox" << std::endl;
}

std::string MacOSInputField::getText() const {
    std::cout << "������ ����� getText � ��������� MacOSTextBox" << std::endl;
    return "������ ������ � TextBox";
}

void MacOSInputField::onValueChanged() {
    std::cout << "������ ����� onValueChanged � ��������� MacOSTextBox" << std::endl;
}

void MacOSInputField::setPosition(int x, int y) {
    std::cout << "������ ����� setPosition � ��������� MacOSTextBox" << std::endl;
}

std::pair<int, int> MacOSInputField::getPosition() const {
    std::cout << "������ ����� getPosition � ��������� MacOSTextBox" << std::endl;
    return {0, 0};
}