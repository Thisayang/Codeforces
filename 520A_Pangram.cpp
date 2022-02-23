#include <stdio.h>
void sort(char a[], int n)
 {
    int i,t,m = 0;
    if(n<1) return;
    for(i=1;i<n;i++)
    {
        if(a[m]<a[i])
        m=i;
    }
    if(m!=n-1)
    {
        t=a[n-1];
        a[n-1]=a[m];
        a[m]=t;
    }
    sort(a,n-1);
}
int main()
{
    int n,i,j=0;
    char a[100];
    scanf("%d%s",&n,a);
    for(i=0;i<n;i++)
    {
        if(a[i]>='A'&&a[i]<='Z') a[i]+=32;
    }
    sort(a,n);
    for(i=0;i<n;i++)
    {
        if(a[i]=='a'+j) j++;
 
    }
    if(j==26) printf("YES\n");
    else printf("NO\n");
}