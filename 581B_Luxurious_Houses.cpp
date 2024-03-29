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
	vector<int> a(n), b(n, 0);
	FOR(i, 0, n) {
		cin >> a[i];
	}
	int max = a[n - 1];
	ROF(i, n - 2, -1) {
		if (a[i] > max) {
			max = a[i];
		} else if (a[i] == max) {
			b[i] = 1;
		} else {
			b[i] = max + 1 - a[i];
		}
	}
	FOR(i, 0, n) {
		cout << b[i] << " ";
	}
	cout << endl;
	return 0;
}