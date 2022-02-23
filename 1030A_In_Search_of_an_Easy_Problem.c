#include <stdio.h>
int main()
{
	int n;
	while(~scanf("%d",&n))
	{
		int x,ok=0;
		while(n--)
		{
			scanf("%d",&x);
			if(x==1) ok=1;
		}
		if(ok==1) printf("HARD\n");
		else printf("EASY\n");
	}
	return 0;
}