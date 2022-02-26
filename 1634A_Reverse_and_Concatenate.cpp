#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n, k;
	cin >> t;
	while (t --) {
		cin >> n >> k;
		string s;
		cin >> s;
		if (k == 0) cout << 1 << endl;
		else {
			int flg = 0;
			for (int i = 0; i <= n / 2; ++ i) {
				if (s[i] != s[n - i - 1]) {
					flg = 1;
					break;
				}
			}
			if (flg == 1) cout << 2 << endl;
			else cout << 1 << endl;
		} 
	}
	return 0;
}