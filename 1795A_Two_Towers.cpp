#include <bits/stdc++.h>

using namespace std;

void Solve(void)
{
    int n;
    int m;
    int max = 30;
    cin >> n >> m;
    char x[n + 1];
    char y[m + 1];
    char ans[max];
    int cnt = 0;
    scanf("%s\n%s", x, y);
    for (int i = 0; i < n; ++i) {
        ans[cnt++] = x[i];
    }
    for (int j = m - 1; j >= 0; --j) {
        ans[cnt++] = y[j];
    }
    int flg = 1;
    cnt = 0;
    for (int i = 1; i < m + n; ++i) {
        if (ans[i - 1] == ans[i]) {
            flg++;
        } else flg = 1;
        if (flg == 2) {
            cnt ++;
            if (cnt == 2) {
                cout << "NO" << endl;
                return ;
            }
        } else if (flg == 3) {
            cout << "NO" << endl;
            return ;
        }
    }
    cout << "YES" << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--) {
        Solve();
    }
    return 0;
}