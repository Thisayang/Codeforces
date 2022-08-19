#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, a, n) for (int i = a; i < int(n); ++ i)
#define ROF(i, a, n) for (int i = a; i > int(n); -- i)
const long long mod = 1e9 + 7;
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, m;
	cin >> n >> m;
	if (n == 0 && m != 0) cout << "Impossible" << endl;
	else if (m <= 1) cout << n << " " << n << endl;
	else {
		int mn = m / n, mx = m / n + 1;
		if (m % n == 0) cout << m;
		else if (n >= m) cout << n;
		else cout << (m % n) * mx + (n - m % n) * mn;
		cout << " " << n - 1 + m << endl;
	}
	return 0;
}