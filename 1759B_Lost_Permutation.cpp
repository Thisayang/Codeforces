#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, a, n) for (int i = a; i < int(n); ++ i)
#define ROF(i, a, n) for (int i = a; i > int(n); -- i)
const long long mod = 1e9 + 7;
using namespace std;

bool Verity(int s, int cnt, const vector<int>& vec)
{
    for (int i = 1; i <= cnt; ++ i) {
        if (vec[i] == 0) {
            s -= i;
        }
    }
    if (s == 0) {
        return true;
    }
    return false;
}
 
void Solve(void)
{
    int m;
    int s;
    int n;
    int tmp;
    int cnt = 1000;
    bool ans = false;
    int two = 2;
    cin >> m >> s;
    n = s;
    vector<int> a(cnt, 0);
    for (int i = 0; i < m; ++i) {
        cin >> tmp;
        s += tmp;
        a[tmp] = 1;
    }
    for (int i = 1; i < cnt; ++i) {
        if (s == (i + 1) * i / two) {
            ans = Verity(n, i, a);
            break;
        }
    }
    if (ans) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
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