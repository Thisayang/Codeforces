#include <bits\stdc++.h>
#define LL long long
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t;
	cin >> t;
	while(t --) {
		int l, r;
		cin >> l >> r;
		if(2 * l > r) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	return 0;
}
