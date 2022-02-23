#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int a,b;
	while(cin>>a>>b)
	{
		int x=0,y=0,z=0; 
		for(int i=1;i<7;i++)
		{
			if(abs(a-i)<abs(b-i)) x++;
			else if(abs(a-i)>abs(b-i)) z++;
			else y++;
		}
		cout<<x<<' '<<y<<' '<<z<<endl;
	}
	return 0;
}