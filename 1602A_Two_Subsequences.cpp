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
		char min = 'z' + 1;
		int len = s.length();
		int flg = len;
		for (int i = 0; i < len; ++ i) {
			if (min > s[i]) {
				min = s[i];
				flg = i;
			}
		}
		if (flg == 0) {
			cout << min << " " << s.substr(1, len - 1);
		} else if (flg == len - 1) {
			cout << min << " " << s.substr(0, len - 1);
		} else {
			cout << min << " " << s.substr(0, flg) + s.substr(flg + 1, len - flg);
		}
		cout << endl;
	}
	return 0;
}