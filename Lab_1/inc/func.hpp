#pragma once
class Function {

public:

	Function() {}

	virtual double evaluate(double x) const = 0;

	virtual ~Function() {}

};