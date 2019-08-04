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
	if (flag == true) return 1;
	else
	{
		return 0;
	}
}
