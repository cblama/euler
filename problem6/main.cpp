#include <iostream>

void main(int argc, char **argv)
{
	int len = atoi(argv[1]);

	// known series identities
	long sum = (len * (len + 1)) / 2;
	long sum_of_squares = (len * (len + 1) * (2 * len + 1)) / 6;

	std::cout << (sum * sum) - sum_of_squares << std::endl;
}