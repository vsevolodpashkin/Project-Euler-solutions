#include <iostream>
using namespace std;
int main()
{
	const int n = 21;
	const int m = 21;
	long long Matrix[n][m];
	int i, j, s, r;

	Matrix[0][0] = 1;
	for (j = 1; j < 21; j++)
		Matrix[0][j] = 1;
	for (i = 1; i < 21; i++)
		Matrix[i][0] = 1;

	for (i = 1; i < 21; i++)
	{
		for (j = 1; j < 21; j++)
		{
			s = i - 1;
			r = j - 1;
			Matrix[i][j] = Matrix[s][j] + Matrix[i][r];
		}
	}
	/*for (i = 0; i < 21; i++)
	{
		{	for (j = 0; j < 21; j++)
			cout << Matrix[i][j] << " ";
		}
		cout << endl;
	}*/
	cout << Matrix[20][20];
	system("pause");
	return 0;
}