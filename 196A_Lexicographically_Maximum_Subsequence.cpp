#include <stdio.h>
#include <string.h>
int main()
{
    int i,c,r=0;
    char a[100000],b[100000],m;
    scanf("%s",a);
    c=strlen(a);
    for(i=c-1;i>=0;i--)
    {
        if(i==c-1)
        {
            m=a[i];
            b[r]=a[i];
            r++;
        }
        if(a[i]>=m&&i!=c-1)
        {
            m=a[i];
            b[r]=a[i];
            r++;
        }
    }
    for(i=r-1;i>=0;i--)
    {
        printf("%c",b[i]);
    }
    return 0;
}