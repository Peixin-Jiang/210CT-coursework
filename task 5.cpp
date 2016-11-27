#include<iostream>
using namespace std;
void multiplication(int** B, int** C, int** a,int n)
{
	for(int i=0;i<n;i++)
    {
    	for(int j=0;j<n;j++)
    	a[i][j]=a[i][j]+B[i][j]*C[j][i];
    }
}
void subtraction(int** a,int** d,int** e,int n)
{
	for(int i=0;i<n;i++)
    {
    	for(int j=0;j<n;j++)
    	e[i][j]=a[i][j]-d[i][j];
    }
}
void addition(int** B,int** C,int** d,int n)
{
	for(int i=0;i<n;i++)
    {
    	for(int j=0;j<n;j++)
    	d[i][j]=B[i][j]+C[i][j];
    }
}
int main()
{
	int n;
	cin>>n;
	int ** B=new int *[n];
for (int i=0;i<n;i++)
    B[i]=new int[n];
    int** C= new int*[n];
    for(int i=0;i<n;i++)
    C[i]=new int[n];
    int** a=new int*[n];
    for(int i=0;i<n;i++)
    a[i]=new int[n];
	int** d=new int*[n];
	for(int i=0;i<n;i++)
	d[i]=new int[n];
	int** e=new int*[n];
	for(int i=0;i<n;i++)
	e[i]=new int[n]; 
    for(int i=0;i<n;i++)
    {
    	for(int j=0;j<n;j++)
    	cin>>B[i][j];
    
    }
    for(int i=0;i<n;i++)
    {
    	for(int j=0;j<n;j++)
    	cin>>C[i][j];
    }
	multiplication(B,C,a,n);
    addition(B,C,d,n);
    for(int i=0;i<n;i++)
    {
    	for(int j=0;j<n;j++)
    	d[i][j]=2*d[i][j];
    }
    subtraction(a,d,e,n);
    for (int i=0;i<n;i++)
{
 	delete[ ] a[i]; 
}                     
delete[ ] a; 
for (int i=0;i<n;i++)
{
 	delete[ ] B[i]; 
}                     
delete[ ] B; 
for (int i=0;i<n;i++)
{
 	delete[ ] C[i]; 
}                     
delete[ ] C;
for (int i=0;i<n;i++)
{
 	delete[ ] d[i]; 
}                     
delete[ ] d;
for (int i=0;i<n;i++)
{
 	delete[ ] e[i]; 
}                     
delete[ ] e; 
 
 


} 
