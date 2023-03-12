#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, a, n) for (int i = a; i < int(n); ++ i)
#define ROF(i, a, n) for (int i = a; i > int(n); -- i)
const long long mod = 1e9 + 7;
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t;
    cin >> t;
    while (t--) {
        int n;
        int c;
        int a;
        int ans = 0;
        map<int, int> mp;
        cin >> n >> c;
        for (int i = 0; i < n; ++i) {
            cin >> a;
            mp[a]++;
        }
        for (auto it = mp.begin(); it != mp.end(); ++it) {
            if (it->second >= c) {
                ans += c;
            } else {
                ans += it->second;
            }
        }
        cout << ans << endl;
    }
    return 0;
}