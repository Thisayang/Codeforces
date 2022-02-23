#include <iostream>
using namespace std;
int main()
{
	int n;
	while(cin>>n)
	{
	int a=1,b=2,c=a+b;
		for(int i=1;i<=n;i++)
		{
			if(i==a||i==b||i==c) cout<<'O';
			else cout<<'o';
			if(i>=a) a=b,b=c,c=a+b;
		}
		cout<<endl;
	}
	return 0;
}