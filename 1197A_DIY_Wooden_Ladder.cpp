#include <bits\stdc++.h>
#define LL long long
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n, a[200010];
	while(cin >> t) {
		while(t --) {
			cin >> n;
			for(int i = 0; i < n; ++ i) cin >> a[i];
			sort(a, a + n);
			cout << min(a[n - 2] - 1, n - 2) << endl;
		}
	}
	return 0;
}
