#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	vector<int>arr(n);
	map<int,int>m;
	for(int i = 0; i<n ; i++)
	{
		cin >> arr[i];
		m[arr[i]]++;
	}
	int res = n/2;
	for(map<int,int>:: iterator it = m.begin() ; it!= m.end(); it++)
	{
		if(it->second >= res )
		{
			cout << it-> first <<" ";
		}
	}
	return 0;
}
