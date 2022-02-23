#include <iostream>
using namespace std;
int main()
{
	int a,b,c;
	while(cin>>a>>b>>c)
	{
		for(int i=a;i>=0;i--)
		{
			if(b>=2*i&&c>=4*i) 
			{
				cout<<7*i<<endl;
				break;
			}
		}
	}
	return 0;
}