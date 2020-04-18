#include<iostream>

int main()
{
	auto sum1{ 0 }, sum2{ 0 }, residual{ 0 };
	for (size_t i = 1; i <= 100; i++)
	{
		sum1 += i;
	}
	sum1 = pow(sum1, 2);

	for (size_t i = 1; i <= 100; i++)
	{
		sum2 += pow(i, 2);
	}
	
	residual = abs(sum1 - sum2);
	std::cout << "Result is " << residual << std::endl;
	return 0;

}