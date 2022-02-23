#include <bits\stdc++.h>
#define ll long long
#define ld long double
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n, k, a[110];
	while(cin >> t) {
		while(t --) {
			cin >> n >> k;
			for(int i = 1; i <= n; ++ i) cin >> a[i];
			bool flg = 0;
			if(k > 10000) {
				cout << -1 << endl;
				continue;
			}
			if(n == 1) {
				cout << -1 << endl;
				continue;
			}
			while(k > 1) {
				int i;
				for(i = 1; i < n; ) {
					if(a[i] >= a[i + 1]) ++ i;
					else {
						int tmp = min(a[i + 1] - a[i], k - 1);
						k -= tmp;
						a[i] += tmp;
						break;
					}
				}
				if(i == n) break;
			}
			for(int i = 1; i < n; ++ i) {
				if(a[i] < a[i + 1]) {
					cout << i << endl;
					flg = 1;
					break;
				}
			}
			if(flg == 0) cout << -1 << endl;
		}
	}
	return 0;
}
