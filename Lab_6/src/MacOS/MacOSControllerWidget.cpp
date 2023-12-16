#include "../inc/MacOS/MacOSControllerWidget.h"

AbstractControl* MacOSControllerWidget::createButton() {
    return new MacOSControllerButton();
}

AbstractControl* MacOSControllerWidget::createLabel() {
    return new MacOSControllerText();
}

AbstractControl* MacOSControllerWidget::createTextBox() {
    return new MacOSInputField();
}