#include <stdio.h>
#include <math.h>
int main()
{
    int m,n,i,c,d,y;
    int a[110],b[110];
    scanf("%d%d",&m,&n);
    for(i=0;i<=m;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<=n;i++)
    {
        scanf("%d",&b[i]);
    }
    if(m>n)
    {
        if(b[0]<0&&a[0]>0||a[0]<0&&b[0]>0) printf("-Infinity");
        else printf("Infinity");
    }
    else if(m<n)
    {
        printf("0/1");
    }
    else if(m==n)
    {
        c=a[0];
        d=b[0];
        if(a[0]<0) a[0]*=-1;
        if(b[0]<0) b[0]*=-1;
        y=a[0]<b[0]?a[0]:b[0];
        for(i=2;i<=y;i++)
        {
            if(a[0]%i==0&&b[0]%i==0)
            {
                a[0]=a[0]/i;
                b[0]=b[0]/i;
                y=a[0]<b[0]?a[0]:b[0];
                i=1;
            }
        }
        if(c<0&&d>0||c>0&&d<0) printf("-%d/%d",a[0],b[0]);
        else printf("%d/%d",a[0],b[0]);
    }
    return 0;
}
