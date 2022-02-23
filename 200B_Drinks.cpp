#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
	int n;
	while(cin>>n)
	{
		double m,x=0;
		for(int i=0;i<n;i++)
		{
			cin>>m;
			x+=m;
		}
		printf("%.12f\n",x/n);
	}
	return 0;
}