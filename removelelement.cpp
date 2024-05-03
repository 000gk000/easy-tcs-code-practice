#include<bits/stdc++.h>
using namespace std;
int main ()
{
	// array input 
	
	int n ;
	cin >> n;
	int arr[n];
	for(int i = 0 ; i<n ;i++)
	{
		cin >> arr[i];
	}
	//count nonzero element
	int count = 0 ;
	for(int i = 0 ; i<n ;i++)
	{
		if(arr[i] != 0)
		count++;
	}
	// new array[countnonzero]
	int newarray[count];
	int index=0;
	// input array ka value new me dalenge yahi wo o nhai hai to 
	for(int i = 0; i<n ; i++)
	{
		if(arr[i]!=0)
		{
			newarray[index]=arr[i];
			index++;
		}
	}
	// print new array 
	for(int i = 0; i<count ; i++)
	{
		cout << newarray[i] << " " ;
	}

}
