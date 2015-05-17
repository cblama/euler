#include <iostream>

void main(int argc, char* argv[])
{
	long v_2 = 1, v_1 = 1;
	long v_0 = 0;
	long long sum = 0;
	while (v_0 < atol(argv[1]))
	{
		v_0 = v_2 + v_1;
		
		if (v_0 % 2 == 0)
			sum += v_0;
		
		v_2 = v_1;
		v_1 = v_0;
	}
	std::cout << sum << std::endl;
}