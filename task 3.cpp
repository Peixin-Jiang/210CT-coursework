#include<iostream>
using namespace std;
int PerfectSquare(int k)
{
	double low=0, high=k,mid=0,sqrt=0;
	int h=1;
	while(high-low>0.1&&h==1)
	{
		mid=(high+low)/2;
		if(mid*mid==k)
		{
		   sqrt=mid;
		   h=0;
	    }
		else if(mid*mid>k)
		high=mid;
		else
		low=mid;
		
	}
	if(sqrt==0)
	{
		sqrt=mid;
	}
	int d=int(sqrt);
	return d;
}
int main()
{
	int m,t;
	cin>>m;
	t=PerfectSquare(m);
	cout<<t*t;
}
