#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, a, n) for (int i = a; i < int(n); ++ i)
#define ROF(i, a, n) for (int i = a; i > int(n); -- i)
const long long mod = 1e9 + 7;
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n, x;
	cin >> t;
	while (t --) {
		cin >> n >> x;
		int c1 = 0, c2 = 0, tmp;
		FOR(i, 0, n) {
			cin >> tmp;
			if (tmp & 1) c1 ++;
			else c2 ++;
		}
		
		if (c1 == 0) {
			cout << "NO" <<endl;
		} else {
			if (c1 % 2 == 0) c1 --;
			if (c1 + c2 < x || (c2 == 0 && x % 2 == 0)) cout << "NO" << endl;
			else cout << "YES" << endl;
		}
	}
	return 0;
}