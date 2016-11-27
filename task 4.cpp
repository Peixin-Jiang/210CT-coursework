//Input: s = ¡°beautiful¡±, b = 3 (0 start), l = 2 Output: s = ¡°beaiful¡±
#include<iostream>
#include<string>
using namespace std;
//int main()
//{	string s("beautiful");
//	getline(cin, s);
//	s.erase(3,2);
//	cout<<s;
	//}
	
int main()
{
	char string[9];
	for(int i=0;i<9;i++)
	{
		cin>>string[i];
	}
	int b,l;
	cin>>b>>l;
	for(int i=b+l;i<9;i++)
	{
		string[i-l]=string[i];
	} 
	for(int i=0;i<9-l;i++)
	cout<<string[i];
}
