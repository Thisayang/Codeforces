#include <iostream>
using namespace std;
int main()
{
	int a,b;
	while(cin>>a>>b)
	{
		int sum=0,r=0,s; 
		while(a--)
		{
			cin>>s;
			if(s-r<=b)	sum++;
			else sum=1;
			r=s;
		}
		cout<<sum<<endl;
	}
	return 0;
}