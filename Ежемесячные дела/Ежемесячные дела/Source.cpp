#include <iostream>
#include <vector>
#include <string>

using namespace std;

void ADD(vector <string>& month) 
{
		int day_num; 
		string job_name;
		cin >> day_num >> job_name;
		if (day_num <= month.size())
		{
			month[day_num][0] += 1;
			month[day_num] += " " + job_name;
		}	
}
void ADD_NEXT(vector <string>& month, string job_name, int day_num)
{
	month[day_num][0] += 1;
	string job_name_tmp = job_name;
	job_name_tmp[0] =' ';
	month[day_num] +=job_name_tmp;
}

void NEXT(vector <string>& cur_month,int& month_num)
{
	vector <string> next_month;
	month_num++;

	if (month_num % 12 == 1 || month_num % 12 == 3 || month_num % 12 == 5 || month_num % 12 == 7  || month_num % 12 == 10 || month_num % 12 == 0)
	{
		if (month_num - 1 != 7 || month_num - 1 != 0)
		{
			next_month = cur_month;
			cur_month.resize(32);
			int i = 0;
			for (auto str : next_month)
			{
				cur_month[i] = str;
				i++;
			}
		}		
	}
	if (month_num % 12 == 8)
	{
		
	}

	if (month_num % 12 == 2)
	{
		next_month = cur_month;
		cur_month.resize(29);
		for (int i = 28;i < next_month.size();i++)
		{	
			if (next_month[i] != "0")
			{
				ADD_NEXT(cur_month, next_month[i], 28);
			}
		}
	}

	else {
		next_month = cur_month;
		cur_month.resize(31);
		for (int i = 29;i < next_month.size();i++)
		{
			if (i < 31)
			{
				cur_month[i] = "0";
			}
			
			if (next_month[i] != "0" && next_month[i]!="")
			{
				ADD_NEXT(cur_month, next_month[i], 30);
			}
		}
		
	}
	
}

void DUMP(vector <string> cur_month)
{
	int day_num;
	cin >> day_num;
	if (cur_month.size() <= day_num)
	{
		cout << "0"<< endl;
	}
	else {
		cout << cur_month[day_num] << endl;
	}
	
}

int main()
{
	vector <string> month(32,"0");
	int month_num = 1;
	int command_num = 0;
	string com;
	cin >> command_num;
	while (command_num != 0)
	{
		cin >> com;
		if (com == "ADD")
		{
			ADD(month);
		}
		if (com == "DUMP")
		{
			DUMP(month);
		}
		if (com == "NEXT")
		{
			NEXT(month, month_num);
		}
		command_num--;
	}
	system("pause");
	return 1;
}