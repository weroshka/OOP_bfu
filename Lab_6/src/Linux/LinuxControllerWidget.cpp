#include "../inc/Linux/LinuxControllerWidget.h"

AbstractControl* LinuxControllerWidget::createButton() {
    return new LinuxControllerButton();
}

AbstractControl* LinuxControllerWidget::createLabel() {
    return new LinuxControllerText();
}

AbstractControl* LinuxControllerWidget::createTextBox() {
    return new LinuxInputField();
}