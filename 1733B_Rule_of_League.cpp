#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, a, n) for (int i = a; i < int(n); ++ i)
#define ROF(i, a, n) for (int i = a; i > int(n); -- i)
const long long mod = 1e9 + 7;
using namespace std;

void Solve()
{
    int n;
    int x;
    int y;
    scanf("%d%d%d", &n, &x, &y);
    if (x < y) {
        swap(x, y);
    }
    if (x == 0 || y != 0 || (n - 1) % x != 0) {
        printf("-1");
    } else {
        for (int i = 2; i <= n; i += x) {
            for (int j = 1; j <= x; ++j) {
                printf("%d ", i);
            }
        }
    }
    cout << endl;
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