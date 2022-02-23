#include <stdio.h>
int main()
{
    int n,m,a,s=0;
    scanf("%d%d%d",&m,&n,&a);
    for(int i=1;i<=a;i++)
    {
        s+=i;
    }
    if(s*m<n) printf("0\n");
    else printf("%d\n",s*m-n);
    return 0;
}
