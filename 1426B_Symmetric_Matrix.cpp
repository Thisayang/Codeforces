#include <bits\stdc++.h>
#define LL long long
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n, m, a[110], b[110], c[110], d[110];
	while(cin >> t) {
		while(t --) {
			cin >> n >> m;
			bool flg = false;
			for(int i = 0; i < n; ++ i) {
				cin >> a[i] >> b[i] >> c[i] >> d[i];
				if(b[i] ==c[i]) flg = true;
			}
			if(flg && m % 2 == 0) cout << "YES" << endl;
			else cout << "NO" << endl;
		}
	}
	return 0;
}
