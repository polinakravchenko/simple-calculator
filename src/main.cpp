#include <iostream>
#include <string>
#include <iomanip>
#include "SimpleCalculator.hpp"

using std::cout;
using std::cin;
using std::endl;

int main()
{
	calculator::SimpleCalculator calc(6.03, 10.15);
	cout << "RESULT: " << calc.compute(5.22) << endl;
}
