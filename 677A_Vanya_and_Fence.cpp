#include <iostream>
using namespace std;
int main()
{
	int n,m;
	while(cin>>n>>m)
	{
		int x,y=0;
		for(int i=0;i<n;i++)
		{
			cin>>x;
			if(x>m) y++;
		}
		cout<<y+n<<endl;
	}
	return 0;
}