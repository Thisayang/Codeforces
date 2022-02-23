#include <bits\stdc++.h>
#define LL long long
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n, a[110] = {1, 1}, ans;
	for(int i = 2; i < 11; ++ i) {
		if(a[i] == 1) continue;
		for(int j = 2; i * j < 110; ++ j) a[i * j] = 1;
	}
	while(cin >> t) {
		while(t --) {
			cin >> n;
			if(a[n] == 0) ans = 1;
			else ans = 0;
			for(int i = 0; i < n; ++ i) {
				for(int j = 0; j < n; ++ j) {
					if(i == j || i + j == n - 1 || i + j == n) cout << 1 << ' ';
					else cout << ans << ' ';
				}
				cout << endl;
			}
		}
	}
	return 0;
}
