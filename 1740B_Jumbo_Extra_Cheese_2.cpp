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
    long long l = 0;
    long long s = 0;
    long long a;
    long long b;
    long long two = 2;
    for (int i = 0; i < n; ++i) {
        cin >> a >> b;
        l = max(l, max(a, b));
        s += min(a, b);
    }
    cout << (l + s) * two << endl;
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