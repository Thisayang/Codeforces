#include <iostream>
using namespace std;
int main()
{
	char a[50];
	while(cin>>a)
	{
		int sum=0;
		for(int i=0;a[i]!=0;i++)
		{
			if(a[i]=='1'||a[i]=='3'||a[i]=='5'||a[i]=='7'||a[i]=='9'||
				a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u')
				sum++;
		}
		cout<<sum<<endl;
	}
	return 0;
}