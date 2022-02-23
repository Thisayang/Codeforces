#include <stdio.h>
int main()
{
    int n;
    while(~scanf("%d",&n))
    {
        int a[100000][2]={0},s=0;
        while(n--)
        {
            scanf("%d%d",&a[n][0],&a[n][1]);
            s=a[n][0]+a[n][1]>s?a[n][0]+a[n][1]:s;
        }
        printf("%d\n",s);
    }
    return 0;
}
