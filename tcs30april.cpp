#include<bits/stdc++.h>
using namespace std;

struct person {
	string name;
	int age;
	char grade ;
	string gender;
};
int main()
{
  int n ;
  cin >> n ;
  vector<person>person(n);
  for(int i = 0 ; i<n ; i++)
  {
  	cin >> person[i].name >> person[i].age >> person[i].grade >> person[i].gender ;
  }
  for(int i = 0; i<n ;i++)
  {
  	if(person[i].age>20)
  	{
  		cout << person[i].name << endl; 
  		cout << person[i].grade << endl;
	  }
  }
   for(int i = 0; i<n ;i++)
  {
  	if(person[i].gender == "female" || person[i].gender == "Female")
  	{
  		cout << int(person[i].grade) << endl;
	  }
  }
  return 0;
}
