#include <iostream>
using namespace std;
int main()
{
	char a[101],b[101];
	while(cin>>a>>b)
	{
		for(int i=0;a[i]!=0;i++)
		{
			if(a[i]==b[i]) a[i]='0';
			else a[i]='1';
		}
		cout<<a<<endl;
	}
	return 0;
}