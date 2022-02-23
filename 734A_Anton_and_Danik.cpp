#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	int n;
	while(cin>>n)
	{
		char x[100000];
		int num=0;
		cin>>x;
		for(int i=0;i<strlen(x);i++)
		{
			if(x[i]=='D') num++;
		}
		if(num>n-num) cout<<"Danik"<<endl;
		else if(num<n-num) cout<<"Anton"<<endl;
		else cout<<"Friendship"<<endl;
	}
	return 0;
}