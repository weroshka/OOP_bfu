#pragma once

#include "../inc/AbsctractControl.h"
#include "LinuxControllerButton.h"
#include "LinuxControllerText.h"
#include "LinuxInputField.h"

class LinuxControllerWidget {
public:
    static AbstractControl* createButton();
    static AbstractControl* createLabel();
    static AbstractControl* createTextBox();
};