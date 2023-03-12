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
    int a[n + 1];
    int tmp;
    int cnt = 0;
    for (int i = 0; i < n; ++i) {
        cin >> tmp;
        if (!(tmp & 1)) {
            a[++cnt] = i + 1;
        }
    }
    if (cnt & 1) {
        cout << -1 << endl;
    } else if (cnt == 0) {
        cout << 1 << endl;
    } else {
        cout << a[cnt / 2] << endl;
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