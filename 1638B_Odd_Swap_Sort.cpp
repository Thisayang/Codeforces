#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n, a;
	cin >> t;
	while (t --) {
		cin >> n;
		int mxo = 0, mxe = 0, flg = 0;
		for (int i = 0; i < n; ++ i) {
			cin >> a;
			if (a % 2 == 1){
				if (mxo == 0 || a > mxo) mxo = a;
				else if (a < mxo) flg = 1;
			} else {
				if (mxe == 0 || a > mxe) mxe = a;
				else if (a < mxe) flg = 1;
			}
		}
		cout << (flg == 1 ? "NO" : "YES") << endl;
	}
	return 0;
}