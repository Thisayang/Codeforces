#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, a, n) for (int i = a; i < int(n); ++ i)
#define ROF(i, a, n) for (int i = a; i > int(n); -- i)
const long long mod = 1e9 + 7;
using namespace std;

void Solve()
{
    int n;
    scanf("%d", &n);
    int a[n], b[n];
    long long ans = 0;
    for (int i = 0; i < n; ++i) {
        scanf("%d", &a[i]);
        ans += a[i];
    }
    for (int i = 0; i < n; ++i) {
        scanf("%d", &b[i]);
    }
    for (int i = 0, j = n - 1; i < j;) {
        if (b[i] < b[j]) {
            ans += b[i];
            i++;
        } else {
            ans += b[j];
            j--;
        }
    }
    cout << ans << endl;
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