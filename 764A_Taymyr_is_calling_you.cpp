#include <iostream>
using namespace std;
int main()
{
	int a,b,x;
	while(cin>>a>>b>>x)
	{
		int s[10001]={0},sum=0;
		for(int i=1;a*i<=x;i++) s[a*i]=1;
		for(int i=1;b*i<=x;i++)
		{
			if(s[b*i]==1) sum++;
		}
		cout<<sum<<endl;
	}
	return 0;
}