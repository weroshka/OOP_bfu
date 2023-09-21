#include <iostream>

#include "simpson.hpp"

SimpsonRule::SimpsonRule(double stepSize,double accuracy) : CalculationStrategy(stepSize, accuracy)
{
}

SimpsonRule::~SimpsonRule() {}

double SimpsonRule::calculate(const Function& function, double a, double b) {
	double evenAddition = 0;
	for (int i = 1; i < ((int)(((b - a) / m_step_size) / 2)); i++) {
		evenAddition += function.evaluate(a + 2 * i * m_step_size);
	}
	double oddAddition = 0;
	for (int i = 1; i <= ((int)(((b - a) / m_step_size) / 2)); i++) {
		oddAddition += function.evaluate(a + (2 * i - 1) * m_step_size);
	}
	return ((m_step_size / 3)
		* (function.evaluate(a) + 2 * evenAddition + 4 * oddAddition
			+ function.evaluate(b)));
}