#include <bits\stdc++.h>
#define LL long long
using namespace std;
int n, a[300010];
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	while(cin >> n) {
		for(int i = 0; i < n; ++ i) cin >> a[i];
		sort(a, a + n);
		LL ans = 0;
		for(int i = 0; i < n; ++ i, -- n) {
			LL tmp = a[i] + a[n - 1];
			ans += tmp * tmp; 
		}
		cout << ans << endl;
	}
	return 0;
}
