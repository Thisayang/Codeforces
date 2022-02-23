#include <bits\stdc++.h>
#define LL long long
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n, d, a[110];
	while(cin >> t) {
		while(t --) {
			cin >> n >> d;
			bool flg = true;
			for(int i = 0; i < n; ++ i) {
				cin >> a[i];
				if(a[i] > d) flg = false;
			}
			sort(a, a + n);
			if(a[0] + a[1] <= d) flg = true;
			if(flg) cout << "YES" << endl;
			else cout << "NO" << endl;
		}
	}
	return 0;
}
