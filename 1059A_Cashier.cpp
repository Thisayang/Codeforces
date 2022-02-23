#include<stdio.h>
int main()
{
    int n,L,a;
    while(~scanf("%d%d%d",&n,&L,&a))
    {
        int s[100000]={0},e[100000]={0},i,st=0,sum=0;
        for(i=0;i<n;i++)
        {
            scanf("%d%d",&s[i],&e[i]);
            sum+=(s[i]-st)/a;
            st=s[i]+e[i];
        }
        sum+=(L-st)/a;
        printf("%d\n",sum);
    }
    return 0;
}
