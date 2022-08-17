#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, a, n) for (int i = a; i < int(n); ++ i)
#define ROF(i, a, n) for (int i = a; i > int(n); -- i)
const long long mod = 1e9 + 7;
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, a[110], flg = 0, st, e;
	cin >> n;
	FOR(i, 1, n + 1) {
		cin >> a[i];
	}
	FOR(i, 1, n + 1) {
		FOR(j, 1, n) {
			int k = j + 1;
			if (a[j] > a[k]) {
				swap(a[j], a[k]);
				cout << j << " " << k << endl;
			}
		}
	}
	return 0;
}