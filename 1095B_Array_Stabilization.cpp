#include <bits\stdc++.h>
#define LL long long
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, a[100010];
	while(cin >> n) {
		for(int i = 0; i < n; ++ i) cin >> a[i];
		sort(a, a + n);
		int ans = min(a[n - 2] - a[0], a[n - 1] - a[1]);
		cout << ans << endl;
	}
	return 0;
}
