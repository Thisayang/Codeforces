#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    char a[100];
    scanf("%d",&n);
    getchar();
    for(int i=0;i<n;i++)
    {
        gets(a);
        if(strlen(a)<=10) printf("%s\n",a);
        else printf("%c%d%c\n",a[0],strlen(a)-2,a[strlen(a)-1]);
    }
    return 0;
}