#include <cstdio>
using namespace std;
int main()
{
	int n;
	while(~scanf("%d",&n))
	{
		int num=0;
		for(int i=1;i<=n/2;i++)
		{
			if(n%i==0) num++;
		}
		printf("%d\n",num);
	}
	return 0;
}