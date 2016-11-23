#include<iostream>
using namespace std;
int main()
{
	int a, b, c, d, m, n;
	cin>>a>>b>>c>>d;
	m=a/b;
	n=c/d;
	if(m>=n)
	  cout<<m;
	else
	   cout<<n;
	return 0;
} 
