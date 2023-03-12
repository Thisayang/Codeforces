#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, a, n) for (int i = a; i < int(n); ++ i)
#define ROF(i, a, n) for (int i = a; i > int(n); -- i)
const long long mod = 1e9 + 7;
const std::string alpha = "abcdefghijklmnopqrstuvwxyz";
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n;
	cin >> t;
	while (t --) {
		cin >> n;
		int sum = 0;
		vector<int> a(n);
		FOR(i, 0, n) {
			cin >> a[i];
			sum += a[i];
		}
		if (n == 1) cout << n << endl;
		else if (n == 2) {
			if (a[0] > a[1]) cout << 1 << endl;
			else cout << 2 << endl;
		} else {
			auto max = max_element(a.begin(), a.end());
			if(*max > sum - *max) cout << max - a.begin() + 1 << endl;
			else cout << n << endl;
		}
	}
	return 0;
}