#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	setlocale(LC_ALL, "ENG");
	string str;
	cin >> str;
	int count = 0, index = 0;
	for (auto c : str)
	{
		if (c == 'f')
		{
			count++;
		}
		if (count == 2)
		{
			cout << index;
			system("PAUSE");
			return 1;
		}
		index ++;
	}
	if (count == 0)	{
		cout << "-2";
		system("PAUSE");
		return 1;
	}
	if (count == 1) {
		cout << "-1";
		system("PAUSE");
		return 1;
	}
}