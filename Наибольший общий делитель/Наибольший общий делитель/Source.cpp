#include <iostream>

using namespace std;

int main() 
{
	int a, b, nod;
	cin >> a >> b;
	if (a == b) {
		cout << a;return 1;
	}
	while (a != b) 
	{
		if (a > b) {
			a -= b;
		}
		else {
			b -= a;
		}
	}
	cout << a;
	system("PAUSE");
	
}