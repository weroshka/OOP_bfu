#pragma once
#include <iostream>

class AbstractControl {
public:
    virtual void setPosition(int x, int y) = 0;
    [[nodiscard]] virtual std::pair<int, int> getPosition() const = 0;
    virtual ~AbstractControl() = default;
};