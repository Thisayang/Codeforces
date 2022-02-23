#include <iostream>
using namespace std;
int main()
{
	int a,b;
	while(cin>>a>>b)
	{
		int sum=240-b,ok=0;
		for(int i=0;i<a;i++)
		{
			sum-=5*i;
			if(sum-(i+1)*5<0)
			{
				cout<<i<<endl;
				ok=1;
				break;
			}
		}
		if(ok==0) cout<<a<<endl;
	}
	return 0;
}