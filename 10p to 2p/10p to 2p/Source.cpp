#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int n;
	vector <int> vec;
	cin >> n;
	while (n > 0)
	{
		int j = n % 2;
		vec.push_back(j);
		n = n / 2;
		if (n == 1)
		{
			vec.push_back(1);
			break;
		}
	}
	for (int i = vec.size();i>0;i--)
	{
		cout << vec[i-1];
	}
	system("PAUSE");
}