#include<iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
	int t;
	int n;
	double x, num, sum;

	cin >> t;

	for (int i = 0; i < t; i++)
	{
		cin >> n >> x;
		sum = 0;
		for (int j = 0; j < n; j++)
		{
			cin >> num;
			sum += num;
		}
		if ((sum / n) == x)
		{
			cout << "YES" << endl;
		}
		else
		{
			cout << "NO" << endl;
		}
	}


	return 0;
}
