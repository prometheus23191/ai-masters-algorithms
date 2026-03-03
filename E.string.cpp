#include<iostream>
#include<string>
#include<algorithm>

using std::cin, std::cout, std::endl;

int main()
{
	int t;
	std::string str;

	cin >> t;

	for (int i = 0; i < t; i++)
	{
		cin >> str;
		cout << std::count(str.begin(), str.end(), '1') << endl;
	}

	return 0;
}
