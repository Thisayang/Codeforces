#include <stdio.h>
int main()
{
	int m,n;
	while(~scanf("%d%d",&m,&n))
	{
		int y=0;
		while(m<=n)
		{
			m*=3;
			n*=2;
			y++;
		}
		printf("%d\n",y);
	}
	return 0;
}