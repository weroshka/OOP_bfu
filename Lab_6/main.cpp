#include <iostream>
#include <vector>
#include "inc/ControllerForm.h"
#include "inc/Windows/WindowsControllerWidget.h"
#include "inc/Linux/LinuxControllerWidget.h"
#include "inc/MacOS/MacOSControllerWidget.h"

int main() {
    setlocale(LC_ALL,"Rus");
    AbsctractForm form;


#ifdef _WIN32
    using ControllerWidget = WindowsControllerWidget;
#elif __linux__
    using ControlFactory = LinuxControlFactory;
#elif __APPLE__
    using ControlFactory = MacOSControlFactory;
#endif

    AbstractControl* button = ControllerWidget::createButton();
    AbstractControl* label = ControllerWidget::createLabel();
    AbstractControl* textBox = ControllerWidget::createTextBox();

    form.addControl(button);
    form.addControl(label);
    form.addControl(textBox);

    form.manipulateControls();

    delete button;
    delete label;
    delete textBox;

    return 0;
}