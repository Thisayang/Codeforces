#include <stdio.h>
#include <iostream>
#include <string>
#include <map>
#include <cstring>
using namespace std;
int main()
{
	int n;
	while(cin>>n)
	{
		map<string,int> a,b;
		string name[1000];
		int x[1000];
		for(int i=0;i<n;i++)
		{
			cin>>name[i]>>x[i];
			a[name[i]]+=x[i];
		}
		int max;
		for(int i=0;i<n;i++)
		{
			if(i==0) max=a[name[i]];
			if(a[name[i]]>max) max=a[name[i]];
		}
		for(int i=0;i<n;i++)
		{
			b[name[i]]+=x[i];
			if((a[name[i]]>=max)&&(b[name[i]]>=max))
			{
				cout<<name[i]<<endl;
				break;
			}
		}
	}
	return 0;
}