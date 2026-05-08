#include <iostream>

int readNumber()
{
	int num;
	std::cin >> num;
	return num;
}

void writeAnswer(int ans)
{
	std::cout << "The sum of the numbers you inputted is " << ans
		  << std::endl;
}
