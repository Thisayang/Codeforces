#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, a, n) for (int i = a; i < int(n); ++ i)
#define ROF(i, a, n) for (int i = a; i > int(n); -- i)
const long long mod = 1e9 + 7;
using namespace std;

inline void Solve(void)
{
    int w;
    int h;
    int d;
    scanf("%d%d%d", &w, &d, &h);
    int x1;
    int y1;
    int x2;
    int y2;
    scanf("%d%d%d%d", &x1, &y1, &x2, &y2);
    int ans1 = min(x1 + x2 + abs(y1 - y2), 2 * w - x1 - x2 + abs(y1 - y2));
    int ans2 = min(y1 + y2 + abs(x1 - x2), 2 * d - y1 - y2 + abs(x1 - x2));
    int ans = min(ans1, ans2);
    printf("%d\n", ans + h);
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