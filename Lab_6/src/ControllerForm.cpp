#include "ControllerForm.h"

void AbsctractForm::addControl(AbstractControl* control) {
    controls.push_back(control);
}

void AbsctractForm::manipulateControls() {
    for (auto control : controls) {
        control->setPosition(10, 20);  
        std::cout << "����������� ������� � ���������" << std::endl;
    }
}