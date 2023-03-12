#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, a, n) for (int i = a; i < int(n); ++ i)
#define ROF(i, a, n) for (int i = a; i > int(n); -- i)
const long long mod = 1e9 + 7;
using namespace std;

void Solve(void)
{
    int n;
    int k;
    cin >> n >> k;
    vector<long long> a(k, 0);
    long long tmp = 0;
    for (int i = 0; i < n; ++i) {
        cin >> tmp;
        if (i < k) {
            a[i] = tmp;
        } else {
            a[i % k] = max(a[i % k], tmp);
        }
    }
    long long ans = accumulate(a.begin(), a.end(), 0ll);
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