#include<bits/stdc++.h>
using namespace std;
int main()
{  
   int n ;
  
   cout << "n = " ;
   cin >> n;
  
   int arr[n];
   for(int i = 0 ; i<n ; i++)
   {
   	cin >> arr[i];
   }
  // start index fix 
  // start index to n 
  // 
  for(int start = 0 ; start<n ; start++)
  {
  	for(int end = start ; end<n ; end++)
  {
  	for(int i = start ; i<=end; i++)
  	{
  	   cout << 	arr[i] << " " ;
	  }
	  cout << endl;
  }
  }

	
   
	return 0 ;
}
