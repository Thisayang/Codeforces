#include <bits\stdc++.h>
#define LL long long
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n, a[60];
	cin >> t;
	while(t --) {
		int ans[60] = {0}, cnt = 0;
		cin >> n;
		for(int i = 0; i < n; ++ i) cin >> a[i];
		if(n == 1) {
			cout << 0 << endl;
			continue;
		}
		for(int i = 0; i < n - 1; ++ i) {
			for(int j = i + 1; j < n; ++ j){
				if(ans[a[j] - a[i]] == 0) cnt ++;
				ans[a[j] - a[i]] ++;
			}
		}
		cout << cnt << endl;
	}
	return 0;
}
