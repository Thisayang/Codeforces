#include <iostream>
#include <algorithm>
using namespace std;
struct card
{
	int a,b;
}s[110];
bool cmp(card s1,card s2)
{
	return s1.a<s2.a;
}
int main()
{
	int n;
	while(cin>>n)
	{
		for(int i=1;i<=n;i++)
		{
			cin>>s[i].a;
			s[i].b=i;
		}
		sort(s+1,s+n+1,cmp);
		for(int i=1;i<=n/2;i++)
		{
			cout<<s[i].b<<' '<<s[n-i+1].b<<endl;
		}
	}
	return 0;
}