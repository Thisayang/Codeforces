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
    vector<int> a(n);
    int tmp;
    int cnt = 0;
    int sum0 = 0;
    int sum1 = 0;
    int ans = 0;
    for (int i = 0; i < n; ++i) {
        cin >> tmp;
        if (tmp == -1) {
            cnt++;
            sum0++;
        } else {
            ans = max(cnt, ans);
            cnt = 0;
            sum1++;
        }
    }
    ans = max(cnt, ans);
    if (ans > 1) ans = sum1 - sum0 + 4;
    else if (ans == 0) ans = sum1 -= 4;
    else ans = sum1 - sum0;
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