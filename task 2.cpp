//Input: 5 Output: 1, Input: 10 Output: 2 
//Hint: Count the prime factors of 5.
#include<iostream>
using namespace std;
int main()
{
	int m,t,k=0;
	cin>>m; 
	if(m <5)
	cout<<"0";
	 for(int i=5;i<=m;i=i+5)
	{
		int d=1,h=1; 
		t=i/5;
		if(t%5!=0)
		k++;
		else
		{
			while(h)
			{
				if(t%5==0)
				{
					h=1;
					d++;
					t=t/5;
				}
				else
				{
				 k=k+d;
				 h=0;
			}
			}
		}
	}
	cout<<k;
}
