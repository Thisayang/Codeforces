#include <iostream>
using namespace std;
int main()
{
	int n,m;
	while(cin>>n>>m)
	{
		char a[100]; 
		int sum,ans=0,max=0;
		for(int i=0;i<m;i++)
		{
			sum=0;
			cin>>a;
			for(int j=0;a[j]!=0;j++) if(a[j]=='1') sum++;
			if(sum<n) ans++;
			else ans=0;
			if(max<ans) max=ans;
		}
		if(max==0) max=ans;
		cout<<max<<endl;
	}
	return 0;
}