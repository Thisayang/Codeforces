#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, a, n) for (int i = a; i < int(n); ++ i)
#define ROF(i, a, n) for (int i = a; i > int(n); -- i)
const long long mod = 1e9 + 7;
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, a[100];
	cin >> n;
	FOR(i, 0, n) {
		cin >> a[i];
	}
	if (n == 1) {
		if (a[0] == 0) cout << "UP" << endl;
		else if (a[0] == 15) cout << "DOWN" << endl;
		else cout << "-1" << endl;
	} else {
		if (a[n - 1] == 0 || (a[n - 1] > a[n - 2] && a[n - 1] != 15)) cout << "UP" << endl;
		else if (a[n - 1] == 15 || a[n - 1] < a[n - 2]) cout << "DOWN" << endl;
	}
	return 0;
}