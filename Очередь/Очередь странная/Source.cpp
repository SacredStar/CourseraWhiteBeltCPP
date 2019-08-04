#include <iostream>
#include <vector>
#include <string>


using namespace std;

int main()
{
	vector <bool> que;
	string str;
	int q, num;
	cin >> q;
	while (q != 0)
	{
		//int i = 0; //То какой номер
		cin >> str;
		if (str == "COME") {
			cin >> num;
			if (num >= 0)
			{
				while (num != 0) {
					que.push_back(true);
					num--;
				}
			}
			else {
				while (num != 0) {
					que.pop_back();
					num++;
				}
			}
		}
		if (str == "WORRY") {
			cin >> num;
			que[num] = false;
		}
		if (str == "QUIET") {
			cin >> num;
			que[num] = true;
		}
		if (str == "WORRY_COUNT") {
			int count = 0;
			for (auto c : que)
			{

				if (c == false)
				{
					count++;
				}
			}
			cout << count << endl;
		}
		q--;
	}
	return 1;
}