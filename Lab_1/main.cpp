#include <iostream>

#include "trapecia.hpp"
#include "simpson.hpp"
#include "fcos.hpp"
#include "fsin.hpp"

int main() {

	double a = 0;
	double b = 0.1;

	std::cout << std::endl << "COS" << std::endl << std::endl;

	CosineFunction cosine;

	for (int i = 0; i < 10; i++) {
		std::cout << "a = 0" << std::endl;
		std::cout << "b = " << b << std::endl;

		TrapezoidalRule trapezoidalRule(1e-4, 1e-4);
		SimpsonRule simpsonRule(1e-4, 1e-4);


		std::cout << "Trapezoidal Rule == ";
		std::cout << trapezoidalRule.calculate(cosine, a, b) << std::endl;
		std::cout << "Simpson's Rule   == ";
		std::cout << simpsonRule.calculate(cosine, a, b) << std::endl;

		std::cout << std::endl;
		b += 0.1;
	}

	b = 0.1;

	std::cout << std::endl << "SIN" << std::endl << std::endl;

	SineFunction sine;

	for (int i = 0; i < 10; i++, b += 0.1) {
		std::cout << "a = 0" << std::endl;
		std::cout << "b = " << b << std::endl;

		TrapezoidalRule trapezoidalRule(1e-4, 1e-4);
		SimpsonRule simpsonRule(1e-4, 1e-4);
		

		std::cout << "Trapezoidal Rule == ";
		std::cout << trapezoidalRule.calculate(sine, a, b) << std::endl;
		std::cout << "Simpson's Rule   == ";
		std::cout << simpsonRule.calculate(sine, a, b) << std::endl;
		

		std::cout << std::endl;
	}

	return 0;

}

   