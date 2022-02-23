#include <bits\stdc++.h>
#define LL long long
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, m, k, a[110], ans;
	cin >> n >> m >> k;
	for(int i = 1; i <= n; ++ i) cin >> a[i];
	for(int i = 1; i < n; ++ i) {
		if(m + i <= n && a[m + i] != 0 && k >= a[m + i]){
			ans = i * 10;
			break;
		} else if(m - i > 0 && a[m - i] != 0 && k >= a[m - i]) {
			ans = i * 10;
			break;
		}
	}
	cout << ans;
	return 0;
}
