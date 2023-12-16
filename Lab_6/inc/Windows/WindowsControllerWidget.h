#pragma once

#include "../inc/AbsctractControl.h"
#include "WindowsControllerButton.h"
#include "WindowsControllerText.h"
#include "WindowsInputField.h"

class WindowsControllerWidget {
public:
    static AbstractControl* createButton();
    static AbstractControl* createLabel();
    static AbstractControl* createTextBox();
};
