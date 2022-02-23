#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n,m;
	while(cin>>n>>m)
	{
		int s=abs(m-n),sum=0,ok=1;;
		while(s>=2)
		{
			sum+=ok*2;
			s-=2;
			ok++;
		}
		sum+=s*ok;
		cout<<sum<<endl;
	}
	return 0;
}