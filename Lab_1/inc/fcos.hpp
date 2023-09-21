#pragma once
#include "func.hpp"

class CosineFunction : public Function {

public:

	CosineFunction();

	double evaluate(double x) const;

	virtual ~CosineFunction();

};