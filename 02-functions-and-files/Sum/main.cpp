#include <iostream>

int readNumber();

void writeAnswer(int ans);

int main()
{
	std::cout << "Enter a number: ";
	int num1{ readNumber() };

	std::cout << "Enter another number: ";
	int num2{ readNumber() };

	writeAnswer(num1 + num2);
}
