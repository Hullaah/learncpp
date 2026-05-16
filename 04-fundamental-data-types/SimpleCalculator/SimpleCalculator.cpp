#include <iostream>

double readNumber()
{
	double val;
	std::cout << "Enter a double value: ";
	std::cin >> val;
	return val;
}

char readOperator()
{
	char c;
	std::cout << "Enter +, -, * or /: ";
	std::cin >> c;
	return c;
}

void printOutput(double a, char op, double b, double res)
{
	std::cout << a << " " << op << " " << b << " is " << res << std::endl;
}

int main()
{
	double a{ readNumber() };
	double b{ readNumber() };
	char op{ readOperator() };
	double result{};

	if (op == '+') {
		result = a + b;
		printOutput(a, op, b, result);
		return 0;
	}
	if (op == '-') {
		result = a - b;
		printOutput(a, op, b, result);
		return 0;
	}
	if (op == '*') {
		result = a * b;
		printOutput(a, op, b, result);
		return 0;
	}
	if (op == '/') {
		result = a / b;
		printOutput(a, op, b, result);
		return 0;
	}
	return 0;
}
