#include <iostream>
#include <cmath>
using namespace std;
// ax^2+bx+c=0
int main()
{
	double a, b, c, x1, x2;
	cin >> a >> b >> c;
	if (a == 0 && b == 0)
	{
		cout << " ";
		return 0;
	}
	if (b == 0 && c == 0) {
		x1=x2 = 0;
		cout << x1;
		return 0;
	}
	if (a == 0 && c == 0) {
		x1 = x2 = 0;
		cout << x1;
		return 0;
	}
	if (a == 0)
	{
		x1 = -c / b;
		cout << x1;
		system("PAUSE");
		return 1;
	}
	if (b == 0 && -c/a>0)
	{
		x1 = sqrt(-c / a);
		x2 = -sqrt(-c / a);
		cout << x1<<" "<< x2;
		system("PAUSE");
		return 1;
	}
	if (c == 0)
	{
		x1 = 0;
		x2 = -b / a;
		cout << x1 <<" "<< x2;
		system("PAUSE");
		return 1;
	}
	else {
		double d = b*b - 4*a*c;
		if (d == 0) {
			x1 = x2 = -b / (2 * a);
			cout << x1;
			system("PAUSE");
			return 0;
		}
		if (d < 0) {
			cout << " ";
			return 0;
		}
		x1 = (-b + sqrt(d)) / (2 * a);
		x2 = (-b - sqrt(d)) / (2 * a);
		cout << x1 << " " << x2;
		system("PAUSE");
		return 0;
	}
}
