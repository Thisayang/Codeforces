#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, a, n) for (int i = a; i < int(n); ++ i)
#define ROF(i, a, n) for (int i = a; i > int(n); -- i)
const long long mod = 1e9 + 7;
using namespace std;

void Solve(void)
{
    int n;
    scanf("%d", &n);
    int a[n];
    int sum = 0;
    int two = 2;
    int cnt = 0;
    for (int i = 0; i < n; ++i) {
        scanf("%d", &a[i]);
        if (a[i] == 1) {
            cnt ++;
        } else {
            sum += a[i];
        }
    }
    sort(a, a + n);
    int ans = min(cnt / two + (cnt % two + n - cnt), cnt / two + (cnt % two + sum + 1) / two);
    printf("%d\n", ans);
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