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
	vector<int> a(n);
	FOR(i, 0, n) {
		cin >> a[i];
	}
	sort(a.rbegin(), a.rend());
	if (a[0] >= a[1] + a[2]) cout << "NO" << endl;
	else {
		cout << "YES" << endl;
		FOR(i, 2, n - 1) {
			swap(a[i], a[i + 1]);
		}
		FOR(i, 0, n) {
			cout << a[i] << " ";
		}
		cout << endl;
	}
	return 0;
}