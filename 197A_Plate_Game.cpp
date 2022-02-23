#include <stdio.h>
int main()
{
    int a,b,x;
    scanf("%d%d%d",&a,&b,&x);
    if(a<2*x||b<2*x) printf("Second");
    else printf("First");
    return 0;
}
