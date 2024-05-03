#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n ;
	cin >> n;
	int arr[n];
	int orarr[n];
	for(int i = 0; i< n ; i++)
	{
		cin >> arr[i];
	}
	for(int i = 0; i<n ;i++)
	{
		orarr[i] = arr[i];
	}
     sort(arr,arr+n);
	for(int i = 0 ;i<n ;i++)
	{
		for(int j = 0 ;j<n ; j++)
		{
		   if(	orarr[i] == arr[j])
		   {
		   	cout << j  << " " ; 
		   }
		}
	}
	
}
