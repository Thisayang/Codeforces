#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, a, n) for (int i = a; i < int(n); ++ i)
#define ROF(i, a, n) for (int i = a; i > int(n); -- i)
const long long mod = 1e9 + 7;
using namespace std;

inline void Solve()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    sort(a, a + n);
    if (a[0] == a[n - 1]) {
        printf("NO\n");
    } else {
        printf("YES\n");
        printf("%d", a[n - 1]);
        for (int i = 0; i < n - 1; ++i) {
            printf(" %d", a[i]);
        }
        printf("\n");
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