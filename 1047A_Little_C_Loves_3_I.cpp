#include <iostream>
using namespace std;
int main()
{
	int n;
	while(cin>>n)
	{
		if(n%9==0) cout<<n/3-1<<' '<<n/3-1<<' '<<n/3+2<<endl;
		else if(n%9==8) cout<<n/3<<' '<<n/3<<' '<<n/3+2<<endl;
		else if(n%9==7) cout<<n/3-1<<' '<<n/3<<' '<<n/3+2<<endl;
		else if(n%9==1) cout<<n/3-1<<' '<<n/3+1<<' '<<n/3+1<<endl;
		else if(n%9==2) cout<<n/3-1<<' '<<n/3+1<<' '<<n/3+2<<endl;
		else if(n%9==3||n%9==6) cout<<n/3<<' '<<n/3<<' '<<n/3<<endl;
		else if(n%9==4) cout<<n/3<<' '<<n/3<<' '<<n/3+1<<endl;
		else cout<<n/3<<' '<<n/3+1<<' '<<n/3+1<<endl;
	}
	return 0;
}