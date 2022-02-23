#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int x,y,z,t1,t2,t3;
	while(cin>>x>>y>>z>>t1>>t2>>t3)
	{
		int sum1=abs(x-y)*t1;
		int sum2=abs(z-x)*t2+abs(x-y)*t2+t3*3;
		if(sum2<=sum1) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
	return 0;
}