#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
	char a[2];
	char s[5][2];
	
	while(cin>>a)
	{
		int ok=0;
		getchar();
		for(int i=0;i<5;i++)
		{
			scanf("%s",s[i]);
			if(a[0]==s[i][0]||a[1]==s[i][1])
				ok=1;
		}
		if(ok==0) cout<<"NO"<<endl;
		else cout<<"YES"<<endl;
	}
	return 0;
}