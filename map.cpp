#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n ;
	cin >> n;
	vector<int>arr(n);
	vector<int>newarr;
	map<int,int>frequencycounter;
	for(int i = 0; i<n ; i++)
	{   
	    cin>>arr[i];
		frequencycounter[arr[i]]++;
	}

	
	for( map<int,int>::iterator it = frequencycounter.begin() ; it!=frequencycounter.end() ; it++)
	{
		cout << "array element " <<it->first << "count" << it->second << endl;
	    newarr.push_back(it->first);
	    
	}
	int size = newarr.size();
	cout << size <<endl ;


	for(int i = 0; i<size ; i++)
	{
		cout << newarr[i] << " ";
	}
	cout << endl;
     cout << newarr[size-2];
	return 0 ;
}
