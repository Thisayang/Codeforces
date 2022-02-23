#include <iostream>
#include <map>
using namespace std;
int main()
{
	int n,x;
	while(cin>>n)
	{
		map<int,int>a;
		for(int i=1;i<=n;i++)
		{
			cin>>x;
			a[x]=i;
		}
		map<int,int>::iterator it;
		for(it=a.begin();it!=a.end();it++) cout<<(*it).second<<" ";
	}
	return 0;
}