#include "fsin.hpp"

#include <cmath>

SineFunction::SineFunction() {
}

SineFunction::~SineFunction() {
}

double SineFunction::evaluate(double x) const {
	return sin(x);
}