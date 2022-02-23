#include <iostream>
#include <queue>
using namespace std;
int main()
{
	int n;
	while(cin>>n)
	{
		queue<int>x;
		string m;
		cin>>m;
		int y=0,j=0;
		for(int i=0;m[i]!=0;i++)
		{
			if(m[i]=='B')
			{
				j++;
			}
			else
				if(j>0)
				{
					x.push(j);
					y++;
					j=0;
				}
		}
		if(j>0)
		{
			y++;
			x.push(j);
		}
		if(y) cout<<y<<endl;
		else
		{
			cout<<y<<endl;
			continue;
		}
		while(!x.empty())
			cout<<x.front()<<" ",x.pop();
		cout<<endl;
	}
	return 0;
}