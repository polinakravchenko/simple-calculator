#include "SimpleCalculator.hpp"
#include <cmath>

using std::pow;
using std::sin;
using std::abs;
using std::log; 

namespace calculator {
	SimpleCalculator::SimpleCalculator(const double& a_, const double& b_)
		: a(a_)
		, b(b_)
	{}

	double SimpleCalculator::compute(const double& x) const
	{
		return (static_cast <double> (1) / 2 * a) * log(abs(pow(x, 2) + pow(a, 2) / b - x));
	}

}
