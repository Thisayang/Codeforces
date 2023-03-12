#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, a, n) for (int i = a; i < int(n); ++ i)
#define ROF(i, a, n) for (int i = a; i > int(n); -- i)
const long long mod = 1e9 + 7;
using namespace std;

inline void Solve(void)
{
    int n;
    scanf("%d", &n);
    char s[n];
    scanf("%s", s);
    int ans = -1;
    int flg = 0;
    for (int i = 0; i < n; ++i) {
        if (s[i] == 'L' && s[i + 1] == 'R') {
            flg = i + 1;
        } else if (s[i] == 'R' && s[i + 1] == 'L') {
            ans = 0;
        }
    }
    if (ans != 0 && flg != 0) {
        ans = flg;
    }
    printf("%d\n", ans);
    return;
}

int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t;
    scanf("%d", &t);
    while (t --) {
        Solve();
    }
	return 0;
}