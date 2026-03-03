#include<iostream>

using std::cin, std::cout, std::endl;

int main()
{
	int t;
	long l, r;

	cin >> t;

	for (int i = 0; i < t; i++)
	{
		cin >> l >> r;

		if (r == 1)
		{
			cout << 1 << endl;
		}
		else
		{
			cout << r - l << endl;
		}
	}

	return 0;
}
