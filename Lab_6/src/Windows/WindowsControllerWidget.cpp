#include "../inc/Windows/WindowsControllerWidget.h"

AbstractControl* WindowsControllerWidget::createButton() {
    return new WindowsButton();
}

AbstractControl* WindowsControllerWidget::createLabel() {
    return new WindowsLabel();
}

AbstractControl* WindowsControllerWidget::createTextBox() {
    return new WindowsTextBox();
}