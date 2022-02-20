#include <iostream>
#include <string>
#include <iomanip>
#include "SimpleCalculator.hpp"

using std::cout;
using std::cin;
using std::endl;

int main()
{
	calculator::SimpleCalculator calc(12.07, 7.12);
	cout << "RESULT: " << calc.compute(2.09) << endl;
}
