#include <cstdio>
#include <algorithm>
using namespace std;
int main()
{
    int n,a[3000],i,s=0,r=0;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    while(r==0)
    {
        sort(a,a+n);
        for(i=0; i<n; i++)
        {
            if(a[i]==a[i+1])
            {
                a[i+1]+=1;
                s++;
            }
        }
        sort(a,a+n);
        for(i=0;i<n;i++)
        {
            if(a[i]==a[i+1])
            {
                r=0;
                break;
            }
            else
            {
                r=1;
            }
        }
    }
    printf("%d",s);
    return 0;
}