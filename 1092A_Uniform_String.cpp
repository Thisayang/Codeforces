#include <iostream>
#include <cstdio>
using namespace  std;
int main()
{
	int n;
	while(cin>>n)
	{
		while(n--)
		{
			int a,b;
			cin>>a>>b;
			for(int i=0;i<a;i++)
				printf("%c",i%b+'a');
			cout<<endl;
		}
	}
	return 0;
}