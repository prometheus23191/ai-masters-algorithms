#include<iostream>

using std::cin, std::cout, std::endl;

int main()
{
	int t;

	long n,k,p;

	cin >> t;

	for (int i = 0; i < t; i++)
	{
		cin >> n >> k >> p;

		if ((-n*p <= k) && (k <= n*p))
		{
			if (k <= 0)
			{
				k = -k;
			}

			if ( (k%p) == 0)
			{
				cout << k / p << endl;
			}
			else 
			{
				cout << k / p + 1 << endl;
			}
		}
		else
		{
			cout << -1 << endl;
		}
	}


	return 0;
}
