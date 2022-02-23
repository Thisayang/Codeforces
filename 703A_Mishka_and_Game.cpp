#include <iostream>
using namespace std;
int main()
{
	int n;
	while(cin>>n)
	{
		int x,y,Y=0,N=0;
		for(int i=0;i<n;i++)
		{
			cin>>x>>y;
			if(x>y) Y++;
			if(y>x) N++;
		}
		if(Y>N) cout<<"Mishka"<<endl;
		else if(Y<N) cout<<"Chris"<<endl;
		else cout<<"Friendship is magic!^^"<<endl;
	}
	return 0;
}