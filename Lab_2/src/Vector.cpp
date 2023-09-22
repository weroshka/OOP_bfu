#pragma once
#include "Point.cpp"
#include <math.h>

template <typename T>
class Vector {
public:
    Vector(T x, T y, T z); // Конструктор по координатам
    Vector() {}; // Конструктор по координатам
    Vector(const Point<T>& start, const Point<T>& end); // Конструктор по двум точкам

    // Операции
    Vector<T> operator+(const Vector<T>& other) const;
    Vector<T> operator-(const Vector<T>& other) const;
    Vector<T> operator-() const; // Обратный вектор
    Vector<T> unit() const; // Единичный вектор
    T dotProduct(const Vector<T>& other) const; // Скалярное произведение
    Vector<T> crossProduct(const Vector<T>& other) const; // Векторное произведение
    Vector<T> mixedProduct(const Vector<T>& b, const Vector<T>& c) const; // Смешанное произведение
    T length() const; // Длина вектора
    bool isCollinear(const Vector<T>& other) const; // Проверка на коллинеарность
    bool isCoplanar(const Vector<T>& b, const Vector<T>& c) const; // Проверка на компланарность
    T distance(const Vector<T>& other) const; // Расстояние между векторами
    T angle(const Vector<T>& other) const; // Угол между векторами

    friend std::ostream& operator<<(std::ostream& os, const Vector<T>& obj) {
        os << '(' << obj.x_ << "; " << obj.y_ << "; " << obj.z_ << ')';
        return os;
    }

    friend std::istream& operator>>(std::istream& is, Vector<T>& obj) {
        is >> obj.x_;
        is >> obj.y_;
        is >> obj.z_;
        return is;
    }

private:
    T x_;
    T y_;
    T z_;
};

template <typename T>
Vector<T>::Vector(T x, T y, T z)
    : x_(x), y_(y), z_(z) {}

template <typename T>
Vector<T>::Vector(const Point<T>& start, const Point<T>& end)
    : x_(end.getX() - start.getX()), y_(end.getY() - start.getY()), z_(end.getZ() - start.getZ()) {}

template <typename T>
Vector<T> Vector<T>::operator+(const Vector<T>& other) const {
    return Vector<T>(x_ + other.x_, y_ + other.y_, z_ + other.z_);
}

template <typename T>
Vector<T> Vector<T>::operator-(const Vector<T>& other) const {
    return Vector<T>(x_ - other.x_, y_ - other.y_, z_ - other.z_);
}

//обратный
template <typename T>
Vector<T> Vector<T>::operator-() const {
    return Vector<T>(-x_, -y_, -z_);
}

//единичный
template <typename T>
Vector<T> Vector<T>::unit() const {
    T len = length();
    return Vector<T>(x_ / len, y_ / len, z_ / len);
}

//скалярное
template <typename T>
T Vector<T>::dotProduct(const Vector<T>& other) const {
    return x_ * other.x_ + y_ * other.y_ + z_ * other.z_;
}

//векторное 
template <typename T>
Vector<T> Vector<T>::crossProduct(const Vector<T>& other) const {
    return Vector<T>(
        y_ * other.z_ - z_ * other.y_,
        z_ * other.x_ - x_ * other.z_,
        x_ * other.y_ - y_ * other.x_
    );
}

//смешанное 
template <typename T>
Vector<T> Vector<T>::mixedProduct(const Vector<T>& b, const Vector<T>& c) const {
    return crossProduct(b.crossProduct(c));
}

template <typename T>
T Vector<T>::length() const {
    return std::sqrt(x_ * x_ + y_ * y_ + z_ * z_);
}

template <typename T>
bool Vector<T>::isCollinear(const Vector<T>& other) const {
    // Векторы коллинеарны, если их векторное произведение равно нулю
    return crossProduct(other).length() == 0;
}

template <typename T>
bool Vector<T>::isCoplanar(const Vector<T>& b, const Vector<T>& c) const {
    // Векторы компланарны, если их смешанное произведение равно нулю
    return mixedProduct(b, c).length() == 0;
}

template <typename T>
T Vector<T>::distance(const Vector<T>& other) const {
    // Расстояние между векторами равно длине разности векторов
    return (*this - other).length();
}

template <typename T>
T Vector<T>::angle(const Vector<T>& other) const {
    // Угол между векторами можно найти через арккосинус скалярного произведения нормированных векторов
    return std::acos(dotProduct(other) / (length() * other.length()));
}