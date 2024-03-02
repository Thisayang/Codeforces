#include <bits/stdc++.h>
#define MAX 60
using namespace std;

int Solve(int n, int m)
{
    char s[MAX];
    char t[MAX];
    int flg1 = 0;
    int ans = 1;
    cin >> s;
    cin >> t;
    for (int i = 1; i < m; ++i) {
        if (t[i] == t[i - 1]) {
            flg1 = 1;
        }
    }
    for (int i = 1; i < n; ++i) {
        if (s[i] == s[i - 1] && (flg1 == 1 || s[i - 1] == t[0] || s[i] == t[m - 1])) {
            return 0;
        }
    }
    return ans;
}

int main(void)
{
    int t;
    int n;
    int m;
    cin >> t;
    while (t--) {
        cin >> n >> m;
        cout << (Solve(n, m) ? "YES" : "NO") << endl;
    }
    return 0;
}
