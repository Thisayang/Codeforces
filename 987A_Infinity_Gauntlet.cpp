#include <iostream>
#include <map>
using namespace std;
int main()
{
	int n;
	map<string,int>x;
	map<int,string>y;
	x["red"]=1;
	y[1]="Reality";
	x["blue"]=2;
	y[2]="Space";
	x["green"]=3;
	y[3]="Time";
	x["purple"]=4;
	y[4]="Power";
	x["orange"]=5;
	y[5]="Soul";
	x["yellow"]=6;
	y[6]="Mind";
	while(cin>>n)
	{
		int a[7]={0};
		for(int i=0;i<n;i++)
		{
			string m;
			cin>>m;
			a[x[m]]=1;
		}
		if(n==6) cout<<6-n;
		else cout<<6-n<<endl;
		for(int i=1;i<7;i++)
		{
			if(a[i]==0) cout<<y[i]<<endl;
		}
	}
	return 0;
}