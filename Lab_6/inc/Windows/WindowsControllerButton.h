#pragma once
#include "../inc/AbsctractControl.h"


class WindowsButton : public AbstractControl {
public:
    void setText(const std::string& text);
    [[nodiscard]] std::string getText() const;
    void click();
    void setPosition(int x, int y) override;
    [[nodiscard]] std::pair<int, int> getPosition() const override;
};