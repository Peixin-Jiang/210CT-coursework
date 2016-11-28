//Input: "beautiful" Output: "btfl".
#include<iostream>
#include<string>
using namespace std;
string remove(string s, int k,int length)
{
	if(s[k]=='a'||s[k]=='e'||s[k]=='i'||s[k]=='o'||s[k]=='u')
	{
	    s.erase(k,1);
		length=length-1;
		if(k<length)
			return remove(s,k,length);
	    }
	else 
	{
		if(k+1<length)
			return remove(s,k+1,length);
    }
    return s;
} 
int main()
{
	string s="beautiful";
	//getline(cin,s);
	int length=s.length();
    cout<<remove(s,0,length);
    
}
