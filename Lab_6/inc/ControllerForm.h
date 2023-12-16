#pragma once
#include "AbsctractControl.h"
#include <vector>

class AbsctractForm {
public:
    void addControl(AbstractControl* control);
    void manipulateControls();

private:
    std::vector<AbstractControl*> controls;
};