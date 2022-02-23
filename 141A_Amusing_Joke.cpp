#include <iostream>
using namespace std;
int main()
{
	char a[101],b[101],c[101];
	while(cin>>a>>b>>c)
	{
		int s[26]={0},ok=0;
		for(int i=0;a[i]!=0;i++) s[a[i]-'A']++;
		for(int i=0;b[i]!=0;i++) s[b[i]-'A']++;
		for(int i=0;c[i]!=0;i++) s[c[i]-'A']--;
		for(int i=0;i<26;i++)
		{
			if(s[i]!=0)
			{
				cout<<"NO"<<endl;
				ok=1;
				break;
			}				
		}
		if(ok==0) cout<<"YES"<<endl;
	}
	return 0;
}