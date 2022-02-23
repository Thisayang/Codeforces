#include <bits\stdc++.h>
#define LL long long
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n, a[1010];
	while(cin >> t) {
		while(t --) {
			cin >> n;
			int ans = 0;
			for(int i = 0; i < n; ++ i) cin >> a[i];
			for(int i = 1; i < n - 1; ++ i) {
				if(a[i] > a[i + 1] && a[i] > a[i - 1]) {
					ans = i + 1;
					break;
				}
			}
			if(ans == 0) cout << "NO" << endl;
			else cout << "YES" << endl << ans - 1 << ' ' << ans << ' ' << ans + 1 << endl;
		}
	}
	return 0;
}
