//Input: 25 9 2016 Output: Passed 268 , Left 98
#include<iostream>
using namespace std;
int main()
{
	int year, month, day, passed=0, left;
	cin>>day>>month>>year;
	int a[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	int b[13]={0,31,29,31,30,31,30,31,31,30,31,30,31};
	if(year%4==0)
	{
		for(int i=1;i<month;i++)
		passed=passed+b[i];
		passed=passed+day-1;
		left=366-passed;
	}
	else
	{
		for(int i=1;i<month;i++)
		passed=passed+a[i];
		passed=passed+day-1;
		left=365-passed;
	}
	cout<<"passed: "<<passed<<", left: "<<left;
	return 0;
}
