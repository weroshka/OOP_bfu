#pragma once
#include "abst_class.hpp"

class SimpsonRule : public CalculationStrategy {

public:

	SimpsonRule(double stepSize, double accuracy);

	double calculate(const Function& function, double lowerLimit, double upperLimit);

	virtual ~SimpsonRule();

};