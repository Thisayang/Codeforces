#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, a, n) for (int i = a; i < int(n); ++ i)
#define ROF(i, a, n) for (int i = a; i > int(n); -- i)
const long long mod = 1e9 + 7;
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t;
	vector<int> a(3);
	cin >> t;
	while (t--) {
		cin >> a[0] >> a[1] >> a[2];
		sort(a.begin(), a.end());
		cout << a[1] << endl;
	}
	return 0;
}