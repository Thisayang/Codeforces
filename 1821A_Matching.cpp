#include <bits/stdc++.h>
#define MAX_LEN (10)
using namespace std;

void Solve(void)
{
    char ch[MAX_LEN];
    scanf("%s", ch);
    int cnt = 1;
    if (ch[0] == '?') {
        cnt = 9;
    } else if (ch[0] == '0') {
        cnt = 0;
    }
    for (int i = 1; ch[i] != 0; ++i) {
        if(ch[i] == '?') {
            cnt *= 10;
        }
    }
    printf("%d\n", cnt);
    return ;
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t--) {
        Solve();
    }
	return 0;
}