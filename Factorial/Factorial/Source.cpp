#include <iostream>

using namespace std;

int Factorial(int x)
{
	int fact=1;
	if (x < 0)
	{
		return 1;
	}
	if (x == 0)
	{
		return 1;
	}
	else {
		for(int i=1;i<=x;i++)
		{
			fact = fact *i;
		}
	}
	return fact;
}

int main() 
{
	int x;
	cin >> x;
	cout << Factorial(x);
	system("Pause");
}