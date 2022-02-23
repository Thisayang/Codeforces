#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;
int main()
{
	char a[100];
	while(gets(a))
	{
		int c=strlen(a);
		for(int i=c-1;i>=0;i--)
		{
			if(a[i]=='?'||a[i]==' ') continue;
			else
			{
				if(a[i]=='A'||a[i]=='a'||a[i]=='E'||a[i]=='e'||a[i]=='I'||a[i]=='i'||a[i]=='O'||a[i]=='o'||a[i]=='U'||a[i]=='u'||a[i]=='Y'||a[i]=='y') cout<<"YES"<<endl;
				else cout<<"NO"<<endl;
				break;
			}
		}
	}
	return 0;
}