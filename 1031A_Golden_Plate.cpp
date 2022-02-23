#include <iostream>
using namespace std;
int main()
{
	int a,b,c;
	while(cin>>a>>b>>c)
	{
		int s=0;
		while(c--)
		{
			s+=2*a+2*(b-2);
			a-=4;
			b-=4;
		}
		cout<<s<<endl;
	}
}