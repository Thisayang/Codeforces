#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, a, n) for (int i = a; i < int(n); ++ i)
#define ROF(i, a, n) for (int i = a; i > int(n); -- i)
const long long mod = 1e9 + 7;
using namespace std;

void Solve(void) {
    int n;
    cin >> n;
    vector<int> a(n, 0);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    int ans = 1e9 + 10;
    for (int i = 1; i < n - 1; ++ i) {
        ans = min(ans, a[i + 1] - a[i - 1]);
    }
    cout << ans << endl;
}

int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t;
    cin >> t;
    while (t--) {
        Solve();
    }
	return 0;
}