//Input: a = (3,4), b = (0,5), c = (6,9), p = (-2,4) Output: Left
#include<iostream>
using namespace std;
int main()
{
	int x1, x2, x3,x4, y1, y2, y3, y4;
	cin>>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4;
	if(x4<x1&&x4<x2&&x4<x3)
	cout<<"left";
	if(x4>x1&&x4>x2&&x4>x3)
	cout<<"right";
	if(y4<y1&&y4<y2&&y4<y3)
	cout<<"below";
	if(y4>y1&&y4>y2&&y4>y3)
	cout<<"above";
	
}

