//Input: [1,4,6,7,2] Output: Max is 7 on position 4,
// Min is 1 on position 1.

#include<iostream>
using namespace std;
int main()
{
	int a[5];
	int max,min,position;
	for(int i=1;i<=4;i++)
	cin>>a[i];
	max=a[1];
	position=1;
	for(int i=2;i<=4;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
			position=i;
		}
	} 
	cout<<"Max is "<<max<<" on position "<<position;
	min=a[1];
	position=1;
	for(int i=2;i<=4;i++)
	{
		if(a[i]<min)
		{
			min=a[i];
			position=i;
		}
	} 
	cout<<"Min is "<<min<<" on position "<<position;
}
