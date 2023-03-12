#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, a, n) for (int i = a; i < int(n); ++ i)
#define ROF(i, a, n) for (int i = a; i > int(n); -- i)
const long long mod = 1e9 + 7;
using namespace std;

void Solve()
{
    int a;
    int b;
    int c;
    int d;
    cin >> a >> b >> c >> d;
    if (a < b && a < c && d > b && d > c) {
        cout << "YES" << endl;
    } else if (c > a && c > d && b < a && b < d) {
        cout << "YES" << endl;
    } else if (a > b && a > c && d < b && d < c) {
        cout << "YES" << endl;
    } else if (b > d && b > a && c < d && c < a) {
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