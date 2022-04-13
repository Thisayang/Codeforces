#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int k, n;
	string s, t;
	cin >> k;
	while (k --) {
		cin >> n >> s >> t;
		int flg1, flg2, cnt = 0;
		for (int i = 0; i < n; ++ i) {
			if (s[i] != t[i]) {
				cnt ++;
				if (cnt == 1) flg1 = i;
				else if (cnt == 2) flg2 = i;
			}
		}
		if (cnt == 0) {
			cout << "YES" << endl;
		} else if (cnt == 2) {
			if (s[flg1] == s[flg2] && t[flg1] == t[flg2]) {
				cout << "YES" << endl;
			} else cout << "NO" << endl;
		} else {
			cout << "NO" << endl;
		}
	}
	return 0;
}