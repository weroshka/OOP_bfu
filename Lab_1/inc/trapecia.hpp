#include "abst_class.hpp"

class TrapezoidalRule : public CalculationStrategy {

public:

	TrapezoidalRule(double stepSize, double accuracy);

	double calculate(const Function& function, double lowerLimit, double upperLimit);

	virtual ~TrapezoidalRule();

};