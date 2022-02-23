#include <iostream>
using namespace std;
int main()
{
	char s[51],t[51];
	while(cin>>s>>t)
	{
		int i=0,ok=1,j=0;
		while(s[i]!=0&&t[j]!=0)
		{
			if(s[i]==t[j]) i++,j++,ok++;
			else j++;
		}
		cout<<ok<<endl;
	}
	return 0;
}