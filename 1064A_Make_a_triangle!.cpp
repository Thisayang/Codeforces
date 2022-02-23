#include <iostream>
using namespace std;
int main()
{
	int a,b,c;
	while(cin>>a>>b>>c)
	{
		int max=a;
		if(max<b) max=b;
		if(max<c) max=c;
		if(max==a)
		{
			if(b+c>max) cout<<0<<endl;
			else cout<<max-b-c+1<<endl;
		}
		else if(max==b)
		{
			if(a+c>max) cout<<0<<endl;
			else cout<<max-a-c+1<<endl;
		}
		else
		{
			if(a+b>max) cout<<0<<endl;
			else cout<<max-a-b+1<<endl;
		}
	}
	return 0;
}