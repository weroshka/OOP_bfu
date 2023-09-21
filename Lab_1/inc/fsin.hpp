#pragma once
#include "func.hpp"

class SineFunction : public Function {

public:

	SineFunction();

	double evaluate(double x) const;

	virtual ~SineFunction();

};