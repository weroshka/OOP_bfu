#pragma once

#include "../inc/AbsctractControl.h"

class MacOSControllerText : public AbstractControl {
public:
    void setText(const std::string& text);
    std::string getText() const;
    void setPosition(int x, int y) override;
    std::pair<int, int> getPosition() const override;
};