bool IsPalindrom(string str)
{
	int i = 0;
	bool flag = true;
	while (i < str.size() / 2) {
		if (str[i] == str[str.size() - i - 1]) {
			i++;
			continue;
		}
		else {
			flag = false;
			break;
		}
	}
	if (flag == true) return true;
	else
	{
		return false;
	}
}

vector <string> PalindromFilter(vector<string> words, int minLeght)
{
	vector <string> back;
	int i = 0;
	for (auto str : words)
	{
		string str_new = str;
		if (IsPalindrom(str_new) == true && str_new.size() >=minLeght) //&& str.size> minLeght
		{
			back.push_back(str);
		}
	}
	return back;
}