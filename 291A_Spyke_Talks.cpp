
#include <bits\stdc++.h>
#define LL long long
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, a[1010];
	cin >> n;
	int ans = 0, tmp = -1;
	for(int i = 0; i < n; ++ i) cin >> a[i];
	if(n != 1) {
		sort(a, a + n);
		for(int i = 0; i < n - 1; ++ i) {
			if(a[i] == 0) continue;
			if(a[i] == a[i + 1]) {
				ans ++;
				if(a[i] == tmp) {
					ans = -1;
					break;
				}
			
			}
			tmp = a[i];
		}
	}
	cout << ans;
	return 0;
}
