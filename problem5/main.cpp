#include <iostream>
#include <numeric>

int gcd(int a, int b);
int lcm(int a, int b);

void main(int argc, char **argv)
{
	int* nums;
	int len = atoi(argv[1]);
	nums = new int[len];
	for (int i = 0; i < len; i++)
		nums[i] = i + 1;

	int result = std::accumulate(nums, nums + len, 1, lcm);

	std::cout << result << std::endl;
}

int gcd(int a, int b)
{
	while (true)
	{
		if (a == 0) return b;
		b %= a;
		if (b == 0) return a;
		a %= b;
	}
}

int lcm(int a, int b)
{
	int temp = gcd(a, b);
	return temp ? (a / temp * b) : 0;
}