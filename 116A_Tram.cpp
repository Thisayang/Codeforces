#include <iostream>
using namespace std;
int main()
{
	int n;
	while(cin>>n)
	{
		int a,b,max=0,sum=0;
		while(n--)
		{
			cin>>a>>b;
			sum-=a;
			sum+=b;
			if(sum>max) max=sum;
		}
		cout<<max<<endl;
	}
	return 0;
}