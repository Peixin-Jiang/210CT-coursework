//Input: [5,3,8,6,1,9,2,7] (One potential example of)
//Output: [2,8,3,1,9,7,5,6]
#include<iostream>  
using namespace std;
void swap(int &a, int &b)
{
	int tempt;
	tempt=a;
	a=b;
	b=tempt;
}
int main()
{
	int array[8];
	for(int i=0;i<8;i++)
	cin>>array[i];
	swap(array[1],array[2]);
	swap(array[0],array[6]);
	swap(array[5],array[7]);
	swap(array[3],array[4]);
	swap(array[4],array[7]);
	for(int i=0;i<8;i++)
	cout<<array[i]<<" ";
}
 
