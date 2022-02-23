#include <stdio.h>
int main()
{
    int n,m,a;
    while(~scanf("%d%d%d",&n,&m,&a))
    {
        long long x=0;
        if(n%a==0) x=n/a;
        else x=n/a+1;
        if(m%a==0) x*=m/a;
        else x*=(m/a+1);
        printf("%lld\n",x);
    }
    return 0;
}
