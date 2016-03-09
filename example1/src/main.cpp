#include <iostream>

#include "calculator.hpp"

using std::cout;
using std::endl;

int main() {
	Calculator calc;

	cout << "5 + 9 = " << calc.add(5, 9) << endl;
	cout << "5 * 9 = " << calc.multiply(5, 9) << endl;

	return 0;
}