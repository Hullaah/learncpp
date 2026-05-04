#include <iostream>

int main()
{
	int firstNum;
	int secondNum;
	std::cout << "Enter an integer: ";
	std::cin >> firstNum;
	std::cout << "Enter another integer: ";
	std::cin >> secondNum;
	std::cout << firstNum << " + " << secondNum << " = "
		  << firstNum + secondNum << ".\n";
	std::cout << firstNum << " - " << secondNum << " = "
		  << firstNum - secondNum << ".\n";
	return 0;
}
