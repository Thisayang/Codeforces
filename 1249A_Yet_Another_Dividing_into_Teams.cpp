#include <bits\stdc++.h>
using namespace std;
int main() {
	int t;
	cin >> t;
	while(t --) {
		int n, a[101], ok = 0, ans = 1;
		cin >> n;
		for(int i = 0; i < n; i ++) cin >> a[i];
		sort(a, a + n);
		for(int i = 0; i + 1 < n; i ++) {
			if(a[i] - a[i + 1] >= -1) ok  = 1;
		}
		if(ok == 1) ans = 2;
		cout << ans << endl;
	}
	return 0;
}
