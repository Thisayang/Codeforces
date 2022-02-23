#include <bits\stdc++.h>
#define LL long long
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n;
	cin >> t;
	while(t --) {
		cin >> n;
		int ans = -1;
		int a[110] = {0}, ok[110] = {0};
		for(int i = 1; i <= n; ++ i) {
			cin >> a[i];
			if(a[i] % 2 == 0) ok[++ ans] = i;
		}
		if(n >= 2 && ans == -1) ans = 1, ok[0] = 1, ok[1] = 2;
		if(ans != -1) cout << ans + 1 << endl;
		else cout << ans;
		for(int i = 0; i < ans + 1; ++ i) cout << ok[i] << ' ';
		cout << endl;
	}
	return 0;
}
