#include <stdio.h>
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	char a,b;
	int x,y;
	while(cin>>a>>x>>b>>y)
	{
		int n=abs(a-b)>abs(x-y)?abs(a-b):abs(x-y);
		cout<<n<<endl;
		while(a!=b||x!=y)
		{
			if(a<b) a++,cout<<'R';
			if(a>b) a--,cout<<'L';
			if(x<y) x++,cout<<'U';
			if(x>y) x--,cout<<'D';
			cout<<endl;
		}
	}
	return 0;
} 