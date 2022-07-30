#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, a, n) for (int i = a; i < int(n); ++ i)
#define ROF(i, a, n) for (int i = a; i > int(n); -- i)
const long long mod = 1e9 + 7;
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n;
	cin >> t;
	while (t --) {
		cin >> n;
		vector<int> a(n);
		FOR(i, 0, n) {
			a[i] = i + 1;
		}
		for (int i = 0; i < n - 2; i += 2) {
			swap(a[i], a[i + 1]);
		}
		if (n > 1) swap(a[n - 1], a[n - 2]);
		FOR(i, 0, n) {
			cout << a[i] << " ";
		}
		cout << endl;
	}
	return 0;
}