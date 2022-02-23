#include <stdio.h>
int main()
{
    int n,a,b,c,m=1,s=0,ok=1;
    scanf("%d%d%d%d",&n,&a,&b,&c);
    while(m<n)
    {
        if(ok==1)
        {
            if(a>b) s+=b,ok=3;
            else s+=a,ok=2;
        }
        else if(ok==2)
        {
            if(a>c) s+=c,ok=3;
            else s+=a,ok=1;
        }
        else
        {
            if(b>c) s+=c,ok=2;
            else s+=b,ok=1;
        }
        m++;
    }
    printf("%d\n",s);
    return 0;
}
