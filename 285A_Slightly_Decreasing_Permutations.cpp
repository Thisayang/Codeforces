#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, a, n) for (int i = a; i < int(n); ++ i)
#define ROF(i, a, n) for (int i = a; i > int(n); -- i)
const long long mod = 1e9 + 7;
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, k;
	cin >> n >> k;
	vector<int> a(n);
	FOR(i, 0, n) {
		a[i] = i + 1;
	}
	sort(a.rbegin(), a.rend());
	sort(a.begin() + k, a.end());
	FOR(i, 0, n) cout << a[i] << " ";
	cout << endl;
	return 0;
}