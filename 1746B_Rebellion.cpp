#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, a, n) for (int i = a; i < int(n); ++ i)
#define ROF(i, a, n) for (int i = a; i > int(n); -- i)
const long long mod = 1e9 + 7;
using namespace std;

void Solve(void)
{
    int n;
    cin >> n;
    vector<int> a(n, 0);
    int ans = 0;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    for (int i = 0, j = n - 1; i < j; ++i, --j) {
        for ( ; i < j; ++i) {
            if (a[i] == 1) {
                break;
            }
        }
        for ( ; i < j; --j) {
            if (a[j] == 0) {
                break;
            }
        }
        if (a[i] == 1 && a[j] == 0) {
            ans ++;
        }
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