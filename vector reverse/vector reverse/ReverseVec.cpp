void Reverse(vector <int>& v)
{
	vector< int> vec_in;
	for (int i = v.size() - 1;i >= 0;i--)
	{
		vec_in.push_back(v[i]);
	}
	v.clear();
	for (auto c : vec_in)
	{
		v.push_back(c);
	}
}
