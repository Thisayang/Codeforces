#include <bits\stdc++.h>
#define LL long long
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, k, x, a[110];
	cin >> n >> k >> x;
	for(int i = 0; i < n; ++ i) cin >> a[i];
	sort(a, a + n);
	int ans = 0, i = 0;
	while(n --) {
		if(k > 0 && x < a[i]) ans += x, k --;
		else ans += a[i ++];
	}
	cout << ans;
	return 0;
}
