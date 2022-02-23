#include <stdio.h>
int main()
{
    char a[101];
    int s=0,m=0,n=0;
    gets(a);
    for(int i=0;a[i]!=0;i++)
    {
        if(a[i]=='A')
        {
            for(int j=i;j>=0;j--)
            {
                if(a[j]=='Q') m++;
            }
            for(int j=i;a[j]!=0;j++)
            {
                if(a[j]=='Q') n++;
            }
            s+=m*n;
            m=0;
            n=0;
        }
    }
    printf("%d",s);
    return 0;
}
