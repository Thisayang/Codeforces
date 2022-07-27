#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, a, n) for (int i = a; i < int(n); ++ i)
#define ROF(i, a, n) for (int i = a; i > int(n); -- i)
const long long mod = 1e9 + 7;
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, tmp;
	cin >> n;
	vector<int> a(n + 1, 0);
	int mx = n;
	FOR(i, 0, n) {
		cin >> tmp;
		if (tmp == mx) {
			cout << mx;
			mx --;
			ROF(j, mx, 0) {
				if (a[mx] == 1) {
					cout << " " << mx;
					mx --;
				} else break;
			}
			cout << endl;
		} else {
			cout << endl;
			a[tmp] = 1;
		}
	}
	return 0;
}