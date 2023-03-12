#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, a, n) for (int i = a; i < int(n); ++ i)
#define ROF(i, a, n) for (int i = a; i > int(n); -- i)
const long long mod = 1e9 + 7;
using namespace std;

void Solve(void)
{
    int n;
    int maxn = 2001;
    char a[maxn];
    scanf("%d\n%s", &n, a);
    int len = 0;
    for (int i = 0; a[i] != 0; ++i) {
        len++;
    }
    int ans = len;
    for (int i = 0, j = len - 1; i < j; ++i, --j) {
        if (a[i] != a[j]) {
            ans -= 2;
        } else {
            break;
        }
    }
    cout << ans << endl;
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