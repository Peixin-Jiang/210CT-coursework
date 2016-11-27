#include<iostream>
using namespace std;
int main()
{
	int a, b, c, d, m, n;
	cin>>a>>b>>c>>d;       //Input: a = 30, b = 6, c = 20, d = 10 Output: 5
	m=a/b;
	n=c/d;
	if(m>=n)
	  cout<<m;
	else
	   cout<<n;
	return 0;
} 
