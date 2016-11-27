#include<iostream>
using namespace std;
bool BinarySearch(int* a,int low, int high,int l,int h)
{	 
	if(l<=h)
	{
	int mid=(l+h)/2;
	if( a[mid]>=low && a[mid]<=high )
        return true;	
    else if( a[mid]<low )
        return BinarySearch(a,low,high,mid+1,h);
    else
        return BinarySearch(a,low,high,l,mid-1);
   }
   else
     return false;
}
int main()
{
	int a[] = {2,3,5,7,9,13};
	int low=10, high=14;
	bool t=BinarySearch(a,low,high,0,5);
	cout << boolalpha << t << endl;
}
