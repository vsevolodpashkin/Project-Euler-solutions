
#include<vector>
#include"Main Functions.h"

std::vector<long long> eratosphen(long long n)
{

	std::vector<long long> a(n + 1);
	std::vector<long long> b(0);
	//int *a = new int[n + 1];
	//for (int i = 0; i < n + 1; i++)
		//a[i] = i;
	for (int i = 0; i < n + 1; i++)
		a[i] = i;

	for (int p = 2; p < n + 1; p++)
	{
		if (a[p] != 0)
		{
			b.push_back(a[p]);

			for (int j = p * p; j < n + 1; j += p)
				a.erase(a.begin()+j-1);
		}
	}

	return b;
}