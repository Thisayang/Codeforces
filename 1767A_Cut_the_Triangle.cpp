#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, a, n) for (int i = a; i < int(n); ++ i)
#define ROF(i, a, n) for (int i = a; i > int(n); -- i)
const long long mod = 1e9 + 7;
using namespace std;

void Solve(void)
{
    int x1;
    int y1;
    int x2;
    int y2;
    int x3;
    int y3;
    int ans = 0;
    int t = 2;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    if (x1 == x2 || x1 == x3 || x2 == x3) {
        ans++;
    }
    if (y1 == y2 || y1 == y3 || y2 == y3) {
        ans++;
    }
    if (ans == t) {
        cout << "NO" << endl;
    } else {
        cout << "YES" << endl;
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