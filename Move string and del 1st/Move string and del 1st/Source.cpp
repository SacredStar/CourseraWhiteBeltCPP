#include <iostream>
#include <string>
#include <vector>

using namespace std;

void MoveString(vector <string>& src, vector <string>& dst)
{
	for (auto str : src)
	{
		dst.push_back(str);
	}
	src.clear();
}

int main()
{
	vector <string> src = { "a", "b", "c" }; 
	vector <string> dst = { "z" };
	MoveString(src, dst);
	for (auto str : src)
	{
		cout << str << " ";
	}
	MoveString(src, dst);
	cout << "dst: ";
	for (auto str : dst)
	{
		cout << str << " ";
	}
	system("Pause");
}