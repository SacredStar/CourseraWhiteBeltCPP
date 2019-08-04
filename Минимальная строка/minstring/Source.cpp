#include<iostream>
#include<string>

using namespace std;

int main()
{
	setlocale(LC_ALL, "ENG");
	string a,b,c;
	cin >> a;
	cin >> b;
	cin >> c;

	if (a <= b && a <= c)
	{
		
		cout << a;
		return 1;
	}
	if (b <= a && b <= c)
	{
		cout << b;
		return 1;
	}
	else cout << c;
	system("PAUSE");


}