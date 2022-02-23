#include <iostream>
using namespace std;
int main()
{
	int m,n;
	int x[2][50]={0};
	while(cin>>m>>n)
	{
		int s=0,r=0; 
		for(int i=0;i<2;i++)
		{
			for(int j=0;j<m;j++) cin>>x[i][j];
		}
		int a=0;
		for(int i=0;i<m;i++)
		{
			a+=x[1][i];
			if(x[0][i]-n*a>0) s+=(x[0][i]-n*a);
		}
		a=0;
		for(int i=m-1;i>=0;i--)
		{
			a+=x[1][i];
			if(x[0][i]-n*a>0) r+=(x[0][i]-n*a);
		}
		if(s>r) cout<<"Limak"<<endl;
		else if(s<r) cout<<"Radewoosh"<<endl;
		else cout<<"Tie"<<endl;
	}
	return 0;
}