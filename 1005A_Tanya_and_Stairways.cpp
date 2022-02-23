#include <iostream>
#include <queue>
using namespace std;
int main()
{
	int n;
	while(cin>>n)
	{
		queue<int>a;
		int x[1001],y=0,m=0;
		for(int i=0;i<n;i++) cin>>x[i];
		for(int i=1;i<n;i++)
		{
			if(x[i]>x[i-1]) y++;
			else
			{
				if(y>=0)
				{
					a.push(y+1);
					y=0;
					m++;
				}					
			}
		}
		a.push(y+1),m++;
		if(m==0) cout<<m;
		else cout<<m<<endl;
		while(!a.empty()) cout<<a.front()<<" ",a.pop();
		cout<<endl;
	}
	return 0;
}