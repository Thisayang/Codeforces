#include <stdio.h>
int main()
{
    int a,b,n;
    scanf("%d%d%d",&a,&b,&n);
    if(a<0) a=a*-1;
    if(b<0) b=b*-1;
    if(a+b>n||(n-a-b)%2==1) printf("No");
    else printf("Yes");
    return 0;
}