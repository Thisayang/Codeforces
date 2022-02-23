#include <bits\stdc++.h>
#define LL long long
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n, q, l, r;
	string s;
	while(cin >> t) {
		while(t --) {
			cin >> n >> q >> s;
			for(int i = 0; i < q; ++ i) {
				cin >> l >> r;
				bool flg = 0;
				for(int i = 0; i < l - 1; ++ i)
					if(s[i] == s[l - 1]) flg = 1;
				for(int i = r; i < n; ++ i)
					if(s[r - 1] == s[i]) flg = 1;
				if(flg) cout << "YES" << endl;
				else cout << "NO" << endl;
			}
		}
	}
	return 0;
}
