#include <stdio.h>
int main()
{
    int n,p,k;
    scanf("%d%d%d",&n,&p,&k);
    if(p-k-1>=1) printf("<<");
    for(int i=1,j=-1*k;i<=n;i++)
    {
        if(j>k) break;
        if(i==p&&p!=1) printf(" (%d)",i),j++;
        else if(i==p&&p==1) printf("(%d)",i),j=1;
        else if(p+j<1) printf("%d",1),j=2-p;
        else if(i==p+j&&i==1) printf("%d",i),j++;
        else if(i==p+j) printf(" %d",i),j++;
    }
    if(p+k+1<=n) printf(" >>");
    return 0;
}
