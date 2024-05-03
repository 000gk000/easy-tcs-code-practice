#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	vector<int>arr(n);
	map<int,int>m;
	for(int i = 0; i<n ;i++)
	{
		cin>> arr[i] ;
		m[arr[i]]++;
	}
	
	int count = 0;
	for(map<int,int>::iterator it = m.begin() ; it!=m.end(); it++)
	{
		count++;
	}
	cout<<"array size" << count<<endl;
	int newarr[count];
	
		int index = 0;
		for(map<int,int>::iterator it = m.begin(); it!=m.end();it++)
		{
			newarr[index] = it->first;
			index++;
		}
		
		for(int i = 0;i<count; i++)
		{
			cout<<newarr[i] << " " <<endl;
			
		}
		
		cout << newarr[count-2];
	
	
}
