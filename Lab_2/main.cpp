#include <iostream>
#include "src/Point.cpp"
#include "src/Vector.cpp"

int main() {
    // Пример использования классов
    Point<double> point1(1.0, 2.0, 3.0);
    Point<double> point2(4.0, 5.0, 6.0);

    Vector<double> vector1(point1, point2);
    Vector<double> vector2(2.0, 3.0, 4.0);
    Vector<double> vector;
    std::cout << "Enter three number x , y  and z for crate vector(split by ' ')\n";
    std::cin >> vector;

    Vector<double> sum = vector1 + vector2;
    Vector<double> difference = vector1 - vector2; 


    std::cout << vector1 << std::endl;
    std::cout << vector2 << std::endl;
    std::cout << vector << std::endl;
    std::cout << vector1.isCollinear(vector2) << std::endl;
    std::cout << vector1.isCoplanar(vector2, vector) << std::endl;
    std::cout << vector1.length() << std::endl;
    std::cout << vector1.mixedProduct(vector2, vector) << std::endl;
    std::cout << vector1.dotProduct(vector2) << std::endl;
    std::cout << vector1.crossProduct(vector2) << std::endl;
    std::cout << vector1.distance(vector2) << std::endl;
    std::cout << vector1.angle(vector2) << std::endl;
    std::cout << vector1.unit() << std::endl;
    std::cout << vector1.operator-() << std::endl;

    return 0;
}