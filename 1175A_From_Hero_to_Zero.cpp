#include <bits\stdc++.h>
#define LL long long
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	LL t, n, k;
	while(cin >> t) {
		while(t --) {
			cin >> n >> k;
			LL ans = 0;
			while(n) {
				if(n % k == 0) ans ++, n /= k;
				else ans += n % k, n -= n % k;
			}
			cout << ans << endl;
		}
	}
	return 0;
}
