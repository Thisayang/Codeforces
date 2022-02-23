#include <iostream>
using namespace std;
int main()
{
	int n;
	string x;
	while(cin>>n)
	{
		cin>>x;
		int num=0,ok=0;
		for(int i=1;i<n;i++)
		{
			if(x[i-1]!=x[i])
			{
				num++;
				if(x[i]=='F') ok++;
			}
		}
		if(ok>num/2) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
	return 0;
}