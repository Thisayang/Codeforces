#include <iostream>
using namespace std;
int main()
{
	int t;
	while(cin>>t)
	{
		while(t--)
		{
			long long a,b,c,s=0; 
			cin>>a>>b>>c;
			if(c%2==0)
			{
				s+=c/2*a;
				s-=c/2*b;
			}
			else 
			{
				s+=c/2*a+a;
				s-=c/2*b;
			}
			cout<<s<<endl;
		}
	}
}