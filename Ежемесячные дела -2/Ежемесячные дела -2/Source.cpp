#include <iostream>
#include <vector>
#include <string>

using namespace std;

int add(vector <string>& m)
{
	int i;
	string s;
	cin >> i;
	if (i > m.size())
	{
		return 0;
	}
	else {
		cin >> s;
		m[i] = s;
	}
}

int next(vector <string>& m,int month_num)
{
	string s;
	if (month_num == 1)
	{
		return 1;
	}
	if (month_num == 2)
	{
		s = m[29];
		m[28] += s;
		s = m[30];
		m[28] += s;
		s = m[31];
		m[28] += s;
		m.resize(29);
	}
	if (month_num == 3)
	{
		m.resize(31);
	}
	if (month_num == 4)
	{
		s = m[31];
		m[30] = s;
		m.resize(32);
	}
	if (month_num == 5)
	{
		m.resize(32);
	}
	if (month_num == 6)
	{
		s = m[31];
		m[30] += s;
		m.resize(31);
	}
	if (month_num == 7)
	{
		m.resize(32);
	}
	if (month_num == 8)
	{

	}
	if (month_num == 9)
	{
		s = m[31];
		m[30] += s;
		m.resize(31);
	}
	if (month_num == 10)
	{
		m.resize(32);
	}
	if (month_num == 11)
	{
		s = m[31];
		m[30] = s;
		m.resize(31);
	}
	if (month_num == 12)
	{
		m.resize(31);
	}
	month_num++;
}

void dump(vector <string>& m)
{
	int i;
	cin >> i;
	cout << m[i];
}


void main()
{
	vector <string> month(32);
	int c_month_num = 1;
	int	num_comand = 0;
	cin >> num_comand;
	while (num_comand != 0)
	{
		string com_name;
		cin >> com_name;
		if (com_name == "ADD")
		{
			add(month);
		}
		if (com_name == "NEXT")
		{
			next(month, c_month_num);
		}
		if (com_name == "DUMP")
		{
			dump(month);
		}

		num_comand--;
	}
}