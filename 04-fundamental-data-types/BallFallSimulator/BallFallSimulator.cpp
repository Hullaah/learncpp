#include <cstdlib>
#include <iostream>

double readHeight()
{
	double x{};
	std::cout << "Enter the height of the tower in meters: ";
	std::cin >> x;
	return x;
}

double ballDistanceFromGround(double ballHeight, int time,
			      double gravityConstant)
{
	return ballHeight - (5e-1 * time * time * gravityConstant);
}

int main()
{
	double gravityConstant{ 9.8 };
	double towerHeight{ readHeight() };
	double ballHeight{ towerHeight };
	int time{};

	if (ballHeight <= 0) {
		std::cout << "At " << time
			  << " seconds, the ball is at the ground" << '\n';
		return EXIT_SUCCESS;
	}
	std::cout << "At " << time
		  << " seconds, the ball is at height: " << ballHeight
		  << " meters" << '\n';

	time = time + 1;
	ballHeight = ballDistanceFromGround(towerHeight, time, gravityConstant);
	if (ballHeight <= 0) {
		std::cout << "At " << time
			  << " seconds, the ball is at the ground" << '\n';
		return EXIT_SUCCESS;
	}
	std::cout << "At " << time
		  << " seconds, the ball is at height: " << ballHeight
		  << " meters" << '\n';

	time = time + 1;
	ballHeight = ballDistanceFromGround(towerHeight, time, gravityConstant);
	if (ballHeight <= 0) {
		std::cout << "At " << time
			  << " seconds, the ball is at the ground" << '\n';
		return EXIT_SUCCESS;
	}
	std::cout << "At " << time
		  << " seconds, the ball is at height: " << ballHeight
		  << " meters" << '\n';

	time = time + 1;
	ballHeight = ballDistanceFromGround(towerHeight, time, gravityConstant);
	if (ballHeight <= 0) {
		std::cout << "At " << time
			  << " seconds, the ball is at the ground" << '\n';
		return EXIT_SUCCESS;
	}
	std::cout << "At " << time
		  << " seconds, the ball is at height: " << ballHeight
		  << " meters" << '\n';

	time = time + 1;
	ballHeight = ballDistanceFromGround(towerHeight, time, gravityConstant);
	if (ballHeight <= 0) {
		std::cout << "At " << time
			  << " seconds, the ball is at the ground" << '\n';
		return EXIT_SUCCESS;
	}
	std::cout << "At " << time
		  << " seconds, the ball is at height: " << ballHeight
		  << " meters" << '\n';

	time = time + 1;
	ballHeight = ballDistanceFromGround(towerHeight, time, gravityConstant);
	if (ballHeight <= 0) {
		std::cout << "At " << time
			  << " seconds, the ball is at the ground" << '\n';
		return EXIT_SUCCESS;
	}
	std::cout << "At " << time
		  << " seconds, the ball is at height: " << ballHeight
		  << " meters" << '\n';
}
