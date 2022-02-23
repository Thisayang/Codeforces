#include <iostream>
using namespace std;
int main()
{
	char s[100];
	while(cin>>s)
	{
		int a=0,b=0;
		for(int i=0;s[i]!=0;i++)
			if(s[i]>='A'&&s[i]<='Z') a++;
			else b++; 
		if(a>b)
		{
			for(int i=0;s[i]!=0;i++)
			{
				if(s[i]>='a'&&s[i]<='z') s[i]-=32;
			}
		}
		else
		{
			for(int i=0;s[i]!=0;i++)
			{
				if(s[i]>='A'&&s[i]<='Z') s[i]+=32;
			}
		}
		cout<<s<<endl;
	}
	return 0;
}