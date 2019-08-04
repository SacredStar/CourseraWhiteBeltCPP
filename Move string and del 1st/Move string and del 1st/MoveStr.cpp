void MoveStrings(vector <string>& src, vector <string>& dst)
{
	for (auto str : src)
	{
		dst.push_back(str);
	}
	src.clear();
}
