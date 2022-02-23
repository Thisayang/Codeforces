#include <bits\stdc++.h>
#define ll long long
#define ld long double
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, a[110];
	while(cin >> n) {
		int sum = n * 4.5, ans = 0;
		if(n & 1) sum += 1;
		for(int i = 0; i < n; ++ i) cin >> a[i], ans += a[i];
		if(ans >= sum) cout << 0 << endl;
		else {
			int tmp = sum - ans;
			sort(a, a + n);
			ans = 0;
			for(int i = 0; tmp > 0; ++ i) {
				ans ++;
				tmp -= (5 - a[i]);
			}
			cout << ans << endl;
		}
	}
	return 0;
}
