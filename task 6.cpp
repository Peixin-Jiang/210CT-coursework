//Input: "This is awesome" Output: "awesome is This".
#include<iostream>
using namespace std;
string* reverse(string* a,int n,int k)
{
	if(k<n-1-k)
	{
		string tempt;
		tempt=a[k];
		a[k]=a[n-1-k];
		a[n-1-k]=tempt;
		return reverse(a,n,k+1);
    }
    else
	    return a;
}

int main()
{
	string a[3];
    for(int i=0;i<3;i++)
    cin>>a[i];
	string* r = reverse(a,3,0);
	for(int i=0;i<3;i++)
	cout<<r[i]<<" "; 
}
