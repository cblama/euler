#include <iostream>
#include <string>

bool palindromic_int(long n);

void main(int argc, char **argv)
{
	long main_contender = 0;
	
	// test the top 10% of numbers
	for (long i = 999; i > 999 * .9; i--)
	{	// restrict to upper triangle so we dont repeat ourselves
		for (long j = 999; j >= i; j--)
		{
			long test = i * j;

			if (palindromic_int(test) && test > main_contender)
			{
				main_contender = test;
			}
		}
	}
	std::cout << main_contender << std::endl;
}

bool palindromic_int(long n)
{
	// convert the input to a string
	std::string s = std::to_string(n);
	
	// compare the string to its reverse
	return s == std::string(s.rbegin(), s.rend());
}