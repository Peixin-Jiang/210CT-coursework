//L = [1,2,3,4,1,5,1,6,7] Output: [1,2,3,4]
#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int* L=new int[n];
	int* S=new int[n];  //if L[i] is the end of the ascending sub-sequence, S[i] is the length of the sub-sequence
	for(int i=0;i<n;i++)
	cin>>L[i];
	S[0]=1;
	for(int i=1;i<n;i++)
	{
		S[i]=1;
		if(L[i-1]<L[i])
		S[i]=S[i-1]+1;
	}
	int max=S[0],k,m,t;
	for(int i=1;i<n;i++)
	if(S[i]>max)
	{
		max=S[i];
		k=i;
	}
	int* longest=new int[max];
	for(int i=max-1;i>=0;i--)
	{
			longest[i]=L[k];
			k--;
	}
	for(int i=0;i<max;i++)
	cout<<longest[i]<<" ";
} 
