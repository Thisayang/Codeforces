#include <iostream>
using namespace std;
int main()
{
	int n;
	while(cin>>n)
	{
		int a,b,sum=0;
		while(n--)
		{
			cin>>a>>b;
			if(b-a>=2) sum++;
		}
		cout<<sum<<endl;
	}
	return 0;
}