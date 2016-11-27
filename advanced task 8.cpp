#include<iostream>
using namespace std;
int partition(int* a, int p, int q)
{
	int i=p, j=p+1;
	while(j<=q)
	{
		if(a[j]<a[p])
		{
			i++;
		    int tempt=a[j];
			a[j]=a[i];
			a[i]=tempt;
		}
		j++;
		
	}
	int tempt=a[i];
	a[i]=a[p];
	a[p]=tempt;
	return i;
} 
int FindValue(int* a,int p,int q,int m)
{
    int t=partition(a,p,q);
    if(t==m-1)
    return a[t];
    else if(t<m-1)
    return FindValue(a,t+1,q,m);
    else
    return FindValue(a,p,t-1,m);
    
}

int main()
{
	int n,m;
	cin>>n>>m;
	int* a=new int[n];
	for(int i=0;i<n;i++)
	cin>>a[i];
	cout<<FindValue(a,0,n-1,m);
	delete[] a;
}
