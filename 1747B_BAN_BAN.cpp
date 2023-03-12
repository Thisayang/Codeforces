#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, a, n) for (int i = a; i < int(n); ++ i)
#define ROF(i, a, n) for (int i = a; i > int(n); -- i)
const long long mod = 1e9 + 7;
using namespace std;

void Solve(void)
{
    int n;
    int t = 2;
    scanf("%d", &n);
    int ans = (n + 1) / t;
    printf("%d\n", ans);
    for (int i = 1, j = 3 * n; i < j; i += 3, j -= 3) {
        printf("%d %d\n", i, j);
    }
    return;
}

int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t;
    scanf("%d", &t);
    while (t--) {
        Solve();
    }
	return 0;
}