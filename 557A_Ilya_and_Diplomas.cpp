#include <stdio.h>
int main()
{
    int n,i,j,k,s=0;
    int a1,a2;
    int b1,b2;
    int c1,c2;
    scanf("%d",&n);
    scanf("%d%d",&a1,&a2);
    scanf("%d%d",&b1,&b2);
    scanf("%d%d",&c1,&c2);
    a1=a2>n-b1-c1?n-b1-c1:a2;
    b1=b2>n-a1-c1?n-a1-c1:b2;
    c1=n-a1-b1;
    printf("%d %d %d",a1,b1,c1);
    return 0;
}