#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, a, n) for (int i = a; i < int(n); ++ i)
#define ROF(i, a, n) for (int i = a; i > int(n); -- i)
const long long mod = 1e9 + 7;
using namespace std;

int Solve(void)
{
    int n;
    long long a;
    long long ans;
    cin >> n;
    long long tmp = 1;
    for (int i = 0; i < n; ++i) {
        cin >> a;
        tmp *= a;
    }
    ans = (tmp + (n - 1)) * 2022;
    cout << ans << endl;
    return 0;
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