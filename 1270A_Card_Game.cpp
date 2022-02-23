#include <bits\stdc++.h>
#define LL long long
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n, k1, k2, tmp;
	cin >> t;
	while(t --) {
		bool ans = true;
		cin >> n >> k1 >> k2;
		while(k1 --) cin >> tmp;
		while(k2 --) {
			cin >> tmp;
			if(tmp == n) ans = !ans;
		}
		if(ans) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	return 0;
}
