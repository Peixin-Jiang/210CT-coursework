#include<iostream>
using namespace std;
void check(int n, int m)
{
	if(n%m==0&&m>2)
	cout<<n<<" is not a prime";
	if(n%m!=0&&m>2)
	check(n,m-1);
	if(m <=2)
	cout<<n<<" is a prime";
	
}

int main()
{
	int n,m;
	cin>>n;
	m=n/2;
	check(n,m);
	 
} 
