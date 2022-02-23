#include <bits\stdc++.h>
#define LL long long
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, k, a;
	while(cin >> n >> k) {
		bool flg = 1;
		if(n * 8 < k) flg = 0;
		int sum = 0, ans = 0;
		for(int i = 0; i < n; ++ i) {
			if(k > 0) ans ++;
			cin >> a;
			sum += a;
			k -= min(8, sum);
			sum -= min(8, sum);
		}
		if(flg && k <= 0) cout << ans << endl;
		else cout << -1 << endl;
	}
	return 0;
}
