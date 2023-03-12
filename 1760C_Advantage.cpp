#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, a, n) for (int i = a; i < int(n); ++ i)
#define ROF(i, a, n) for (int i = a; i > int(n); -- i)
const long long mod = 1e9 + 7;
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		vector<int> a(n);
		int FMax = 0;
		int SMax = 0;
		for (int i = 0; i < n; ++i) {
			cin >> a[i];
		}
		vector<int> b = a;
		sort(b.rbegin(), b.rend());
		for (int i = 0; i < n; ++ i) {
			if (a[i] == b[0]) {
				cout << a[i] - b[1] << " ";
			} else {
				cout << a[i] - b[0] << " ";
			}
		}
		cout << endl;
	}
	return 0;
}