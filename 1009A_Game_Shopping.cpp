#include <iostream>
#include <queue>
using namespace std;
int main()
{
	queue<int>a,b;
	int n,m;
	while(cin>>n>>m)
	{
		int s,sum=0;
		for(int i=0;i<n;i++) cin>>s,a.push(s);
		for(int i=0;i<m;i++) cin>>s,b.push(s);
		while(!a.empty()&&!b.empty())
		{
			if(a.front()<=b.front())
			{
				a.pop();
				b.pop();
				sum++;
			}
			else a.pop();
		}
		cout<<sum<<endl;	
	}
	return 0;
}