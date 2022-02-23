#include <bits\stdc++.h>
#define LL long long
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n, a[50010];
	while(cin >> t) {
		while(t --) {
			cin >> n >> a[0];
			int flg = 0, tmp = a[0];
			for(int i = 1; i < n; ++ i) {
				cin >> a[i];
				if(tmp <= a[i]) flg = 1;
				tmp = a[i];
			}
			if(flg) cout << "YES" << endl;
			else cout << "NO" << endl;
		}
	}
	return 0;
}
