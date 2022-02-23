#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
	int a[5],x=0;
	string s;
	cin>>a[1]>>a[2]>>a[3]>>a[4];
	getchar();
	cin>>s;
	for(int i=0;s[i]!=0;i++) x+=a[s[i]-'0'];
	cout<<x<<endl;
	return 0;
}