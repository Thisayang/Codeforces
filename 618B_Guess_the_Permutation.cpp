#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, a, n) for (int i = a; i < int(n); ++ i)
#define ROF(i, a, n) for (int i = a; i > int(n); -- i)
const long long mod = 1e9 + 7;
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n;
	cin >> n;
	vector< vector<int>> a(n + 1, vector<int> (n + 1, 0));
	vector<int> x(n, 0);
	set<int> sett;
	FOR(i, 0, n) {
		int mx = 0;
		FOR(j, 0, n) {
			cin >> a[i][j];
			mx = max(mx, a[i][j]);
		}
		if (sett.find(mx) != sett.end()) x[i] = mx + 1;
		else {
			x[i] = mx;
			sett.insert(mx);
		}
	}
	FOR(i, 0, n) cout << x[i] << " ";
	cout << endl;
	return 0;
}