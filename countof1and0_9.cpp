#include<iostream>
using namespace std;

int main()
{
	string s;
	cin>>s;
	int l = s.length();
	int c1 = 0,c2 = 0;
	for(int i=0;i<l;i++)
	{
		if(s[i]=='1')
			c1++;
		else if(s[i]=='0')
			c2++;
	}
	if(c1==c2)
		cout<<"Equal number of 1's and 0's"<<endl;
	else
		cout<<"Unequal numbers of 1's and 0's"<<endl;
}
