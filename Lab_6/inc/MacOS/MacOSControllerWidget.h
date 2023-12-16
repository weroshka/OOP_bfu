#pragma once

#include "../inc/AbsctractControl.h"
#include "MacOSControllerButton.h"
#include "MacOSControllerText.h"
#include "MacOSInputField.h"

class MacOSControllerWidget {
public:
    static AbstractControl* createButton();
    static AbstractControl* createLabel();
    static AbstractControl* createTextBox();
};