#include<iostream>
#include<vector>

void fibonacci(std::vector<int> &s)
{
	auto temp{ 0 };
	temp = s[1];
	s[1] += s[0];
	s[0] = temp;
}
/*
int main()
{
	std::vector<int> s{ 1,2 };
	auto sum{ 2 };

	while (s[1] < 4E6)
	{
		fibonacci(s);
		if (s[1] % 2 == 0)
		sum += s[1];
	}
	std::cout << "Sum of even-valued terms of Fibonacci sequence is " << sum << std::endl;
	return 0;

}*/