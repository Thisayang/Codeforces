#include <stdio.h>
int main()
{
    int m,n,a,s=0;
    scanf("%d%d",&m,&n);
    for(int i=0;i<m;i++)
    {
        scanf("%d",&a);
        if(a<=5-n) s++;
    }
    printf("%d\n",s/3);
    return 0;
}
