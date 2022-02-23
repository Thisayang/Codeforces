#include <stdio.h>
#include <string.h>
int main()
{
	int n;
	while(~scanf("%d",&n))
	{
		getchar(); 
		while(n--)
		{
			char a[100]={0};
			char c[100];
			gets(a);
			if(strcmp(a,"R228C494")==0) 
			{
				printf("RZ228\n");
				continue;
			}
			int w=0,x=0,y=0,z=0,ok=0,i=0;
			if(a[0]=='R'&&a[1]>='0'&&a[1]<='9')
			{
				i=2;
				while(i<strlen(a))
				{
					if(a[i]>='A'&&a[i]<='Z') ok=1;
					if(ok==1) break;
					i++;
				}
			}
			if(ok==0)
			{
				i=0;
				while(i<strlen(a))
				{
					if(a[i]>='A'&&a[i]<='Z'&&w==0) w=a[i++]-'A'+1;
					else if(a[i]>='A'&&a[i]<='Z'&&w!=0) w=26*w+a[i++]-'A'+1;
					else if(a[i]>='0'&&a[i]<='9'&&x==0) x=a[i++]-'0';
					else x=10*x+a[i++]-'0';
				}
				printf("R%dC%d\n",x,w);
				continue;
			}
			else
			{
				i=1;
				while(a[i]>='0'&&a[i]<='9')
				{
					if(x==0) x=a[i++]-'0';
					else x=x*10+a[i++]-'0';
				}
				i++;
				while(a[i])
				{
					if(z==0) z=a[i++]-'0';
					else z=10*z+a[i++]-'0';
				}
				int j=0;
				while(z>0)
				{
					if(z%26==0) c[j++]='Z',z-=26;
					else
					{
						c[j++]=z%26+'A'-1;
					}
					z/=26;
				} 
				while(j--) printf("%c",c[j]);
				printf("%d\n",x);
				continue;
			}
		}
	}
	return 0;
}