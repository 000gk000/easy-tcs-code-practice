#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	int min;
	cin >> n;
	int arr[n];
	for(int i = 0;i<n ;i++)
	{
		cin >> arr[i];
	}
	

	
//	 sort(arr,arr+n);
//	 for(int i = 0;i<n ;i++)
//	{
//		cout << arr[i] << " ";
//	}
//	
//	cout << arr[0] ;

for(int i = 0 ; i<n ; i++)
{
	if(arr[i]>arr[i+1])
	{
		swap(arr[i],arr[i+1]);
	}
}
 for(int i = 0;i<n ;i++)
	{
		cout << arr[i] << " ";
	}

}
