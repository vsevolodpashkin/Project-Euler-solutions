#include<vector>
#include<iostream>

bool divide3(int s)
{
	if (s % 3 == 0)
		return true;
	else
		return false;
}

bool divide5(int s)
{
	if (s % 5 == 0)
		return true;
	else
		return false;
}

auto evaluate()
{
	auto sum{ 0 };

	for (size_t i = 0; i < 1000; i++)
	{
		if (divide3(i) == true || divide5(i) == true)
			sum += i;
	}
	return sum;
}

void main()
{
	auto result = evaluate();
	std::cout << result << std::endl;
}