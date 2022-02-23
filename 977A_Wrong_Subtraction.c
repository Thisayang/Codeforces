#include <stdio.h>
int main()
{
	int m,n;
	while(~scanf("%d%d",&m,&n))
	{
		while(n--)
		{
			if(m%10==0) m/=10;
			else m--;
		}
		printf("%d\n",m);
	}
	return 0;
}