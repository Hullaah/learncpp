#include <iostream>
#include <ostream>

int main()
{
	int num{};
	std::cout << "Enter an integer: ";
	std::cin >> num;

	std::cout << "Double that number is: " << num * 2 << std::endl;
	std::cout << "Triple that number is: " << num * 3 << std::endl;
	return 0;
}
