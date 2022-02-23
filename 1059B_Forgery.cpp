#include<stdio.h>
#include<string.h>
int main()
{
    int m,n,i,j;
    while(scanf("%d%d",&m,&n)!=EOF)
    {
        int ok=1;
        getchar();
        char a[1001][1001]={0},b[1001][1001]={0};
        memset(b,'.',1001*1001);
        for(i=0;i<m;i++) gets(a[i]);
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                if(a[i][j]=='#'&&a[i][j+1]=='#'&&a[i][j+2]=='#'&&a[i+1][j]=='#'&&a[i+1][j+2]=='#'&&a[i+2][j]=='#'
                   &&a[i+2][j+1]=='#'&&a[i+2][j+2])
                    b[i][j]='#',b[i][j+1]='#',b[i][j+2]='#',b[i+1][j]='#',b[i+2][j]='#',b[i+1][j+2]='#',b[i+2][j+1]='#',b[i+2][j+2]='#';
            }
        }
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                if(a[i][j]!=b[i][j])
                {
                    ok=0;
                    break;
                }
            }
            if(ok==0) break;
        }
        if(ok==1)printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}
