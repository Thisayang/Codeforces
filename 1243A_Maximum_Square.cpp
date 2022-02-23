#include <bits\stdc++.h>
#define LL long long
using namespace std;
bool cmp(int a, int b) {
	return a > b;
}
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int k, n, a[1010];
	cin >> k;
	while(k --) {
		cin >> n;
		int ans = 0;
		for(int i = 0; i < n; i ++) cin >> a[i];
		sort(a, a + n, cmp);
		for(int i = 0; i < n; i ++) {
			if(a[i] >= i + 1) ans ++;
		}
		cout << ans << endl;
	}
	return 0;
}
