#include <iostream>
using namespace std;
int main()
{
	int a,b;
	while(cin>>a>>b)
	{
		int s=1;
		if(a<b)
		{
			for(int i=1;i<=a;i++)
				s*=i;
		}
		else 
		{
			for(int i=1;i<=b;i++)
				s*=i;
		}
		cout<<s<<endl;
	}
	return 0;
}