#include <iostream>
using namespace std;
int main()
{
	int a,b,c,d;
	while(cin>>a>>b>>c>>d)
	{
		int sum=0;
		for(;;)
		{
			if(a>0&&c>0&&d>0)
			{
				sum+=256;
				a--;
				c--;
				d--;
				continue;
			}
			if(a>0&&b>0)
			{
				sum+=32;
				a--;
				b--;
				continue;
			}
			else
			{
				break;
			}
		}
		cout<<sum<<endl;
	}
	return 0;
}