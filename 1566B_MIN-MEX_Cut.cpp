#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t;
	cin >> t;
	while (t --) {
		string s;
		cin >> s;
		int flg = 0;
		for (int i = 1; s[i] != 0; ++ i) {
			if (s[i] != s[i - 1]) {
				flg ++;
			}
		}
		if (flg == 0) {
			if (s[0] == '0') cout << 1 << endl;
			else cout << 0 << endl;
		} else if (flg == 1) {
			cout << 1 << endl;
		} else if (flg == 2) {
			if (s[0] == '0') cout << 2 << endl;
			else cout << 1 << endl;
		} else cout << 2 << endl;
	}
	return 0;
}