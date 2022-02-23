#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
	char s[100];
	while(gets(s))
	{
		int a[26]={0},sum=0;
		for(int i=0;s[i]!=0;i++)
			a[s[i]-'a']++;
		for(int i=0;i<26;i++)
			if(a[i]!=0) sum++;
		if(sum%2==0) cout<<"CHAT WITH HER!"<<endl;
		else cout<<"IGNORE HIM!"<<endl;
	}
	return 0;
}