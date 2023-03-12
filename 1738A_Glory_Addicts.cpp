#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, a, n) for (int i = a; i < int(n); ++ i)
#define ROF(i, a, n) for (int i = a; i > int(n); -- i)
const long long mod = 1e9 + 7;
using namespace std;

bool cmp(long long a, long long b)
{
    return a > b;
}
 
void Solve(void)
{
    int n;
    cin >> n;
    vector<long long> a(n, 0);
    vector<long long> b;
    vector<long long> c;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    long long tmp;
    long long mn = 1e9 + 10;
    long long ans = 0;
    for (int i = 0; i < n; ++i) {
        cin >> tmp;
        if (a[i] == 1) {
            b.push_back(tmp);
        } else {
            c.push_back(tmp);
        }
        mn = min(mn, tmp);
        ans += tmp;
    }
    sort(b.begin(), b.end(), cmp);
    sort(c.begin(), c.end(), cmp);
    int len1 = b.size();
    int len2 = c.size();
    if (b.size() == c.size()) {
        cout << ans + ans - mn << endl;
        return;
    }
    long long sz = min(b.size(), c.size());
    for (int i = 0; i < sz; ++i) {
        ans += b[i] + c[i];
    }
    cout << ans << endl;
    return;
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