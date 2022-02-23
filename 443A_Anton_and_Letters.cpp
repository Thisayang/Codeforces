#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
	char a[1000];
	while(gets(a))
	{
		int s[26]={0},sum=0;
		for(int i=0;a[i]!=0;i++)
		{
			if(a[i]>='a'&&a[i]<='z') s[a[i]-'a']++;
		}
		for(int i=0;i<26;i++)
			if(s[i]!=0) sum++;
		cout<<sum<<endl;
	}
	return 0;
}