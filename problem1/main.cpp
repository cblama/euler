#include <iostream>

void main(int argc, char* argv[])
{
	int num = atoi(argv[1]);
	int sum = 0;
	for (size_t i = 0; i < num; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum += i;
		}
	}
	std::cout << sum << std::endl;
}