#include <iostream>
using namespace std;
int main()
{
	int n,s;
	int L[10001],v[10001],l[10001],r[10001],t[10001];
	while(cin>>n)
	{
		s=0;
		while(s<n)
		{
			int q=0,w=0;
			cin>>L[s]>>v[s]>>l[s]>>r[s];
			q=(l[s]-1)/v[s];
			w=r[s]/v[s];
			t[s]=(L[s]/v[s])-(w-q);
			s++;
		}
		for(int i=0;i<s;i++) cout<<t[i]<<endl;
	}
	return 0;
}