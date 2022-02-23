#include <iostream>
using namespace std;
int main()
{
	int n;
	while(cin>>n)
	{
		int a,b,c,sum=0;
		while(n--)
		{
			cin>>a>>b>>c;
			if((a==1&&b==1)||(a==1&&c==1)||(b==1&&c==1)) sum++;
		}
		cout<<sum<<endl;
	}
	return 0;
}