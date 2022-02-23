#include <iostream>
using namespace std;
int main()
{
	int a;
	while(cin>>a)
	{
		int s,sum=0,r=0;
		while(a--)
		{
			cin>>s;
			if(s>0) sum+=s;
			if(s<0&&sum==0) r++;
			else if(s<0&&sum>0)
			{
				sum--;
			}
		}
		cout<<r<<endl;
	}
	return 0;
}