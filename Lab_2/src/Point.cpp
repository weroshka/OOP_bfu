#pragma once
#include <iostream>

template <typename T>
class Point {
public:
    Point(T x, T y, T z);
    ~Point() = default;
    T getX() const;
    T getY() const;
    T getZ() const;

private:
    T x_;
    T y_;
    T z_;
};

template <typename T>
Point<T>::Point(T x, T y, T z)
    : x_(x), y_(y), z_(z) {}

template <typename T>
T Point<T>::getX() const {
    return x_;
}

template <typename T>
T Point<T>::getY() const {
    return y_;
}

template <typename T>
T Point<T>::getZ() const {
    return z_;
}

