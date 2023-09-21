#include "trapecia.hpp"

TrapezoidalRule::TrapezoidalRule(double stepSize, double accuracy) : CalculationStrategy(stepSize, accuracy)
{
}

TrapezoidalRule::~TrapezoidalRule() {
}

double TrapezoidalRule::calculate(const Function& function, double a,
	double b) {
	double addition = 0;
	for (int i = 1; i <= ((int)((b - a) / m_step_size) - 1); i++) {
		addition += function.evaluate(a + i * m_step_size);
	}
	return ((m_step_size / 2)
		* (function.evaluate(a) + 2 * addition + function.evaluate(b)));
}