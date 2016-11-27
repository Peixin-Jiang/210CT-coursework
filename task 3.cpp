//Input: x = 2 Output: f(x) = 14
#include<iostream>
using namespace std;
int main()
{
	double x, f;
	cin>>x;
	if(x<-2)
	  f=x*x+4*x+4;
	if(x>-2)
	  f=x*x+5*x;
	if(x==0)
	   f=0;
	cout<<f;
}
