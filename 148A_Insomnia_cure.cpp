#include <iostream>
using namespace std;
int main()
{
	int a,b,c,d,e;
	while(cin>>a>>b>>c>>d>>e)
	{
		int sum=0;
		for(int i=1;i<e+1;i++)
		{
			if(i%a==0||i%b==0||i%c==0||i%d==0) sum++;
		}
		cout<<sum<<endl;
	}
	return 0;
}