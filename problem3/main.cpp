#include <iostream>

long long largest_prime_factor(long long n);

void main(int argc, char **argv)
{
	long long num = atoll(argv[1]);
	long long factor = largest_prime_factor(num);

	std::cout << factor << std::endl;
}

long long largest_prime_factor(long long n)
{
	long long largest_factor = 1, p = 3, div = n;

	while (div % 2 == 0)
	{
		largest_factor = 2;
		div = div / 2;
	}

	while (div != 1)
	{
		while (div % p == 0)
		{
			largest_factor = p;
			div = div / p;
		}
		p = p + 2;
	}
	
	return largest_factor;
}