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
	if (n == 1 || n == 2) {
		cout << n << endl;
	} else {
		int cnt = 0, ans = 0;
		FOR(i, 2, n) {
			if (a[i] == a[i - 1] + a[i - 2]) cnt ++;
			else {
				ans = max(ans, cnt);
				cnt = 0;
			}
		}
		ans = max(ans, cnt);
		cout << ans + 2 << endl; 
	}
	return 0;
}