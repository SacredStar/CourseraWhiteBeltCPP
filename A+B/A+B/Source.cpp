#include <iostream>
using namespace std;

int main()
{
	int x, y;
	cin >> x >> y;
	if (x > 100000 || x < -100000) {
		cout << "X неверное";
		return 0;
	}
	if ((y > 100000 || y < -100000)) {
		cout << "Y неверное";
		return 0;
	}
	cout << x + y;
	return 1;
}