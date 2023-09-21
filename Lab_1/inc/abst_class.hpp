#pragma once
#include "func.hpp"

class CalculationStrategy {
protected:
	double m_accuracy = 1e-4;
	double m_step_size = 1e-4;

public:

	CalculationStrategy(double stepSize, double accuracy) {
		if (stepSize > 0) {
			m_step_size = stepSize;
		}
		if (accuracy > 0) {
			m_accuracy = accuracy;
		}
	}

	virtual double calculate(const Function& function, double lowerLimit, double upperLimit) = 0;

	virtual ~CalculationStrategy() {}

};