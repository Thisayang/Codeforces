#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n;
	string s;
	cin >> t;
	while (t --) {
		cin >> n  >> s;
		int cnt = 0, cnt2 = 0;
		for (int i = 0; i < n; ++ i) {
			if (s[i] == '1') cnt ++;
		}
		for (int i = n - 1, st = cnt; st > 0; -- i, -- st) {
			if (s[i] == '1') cnt2 ++; 
		}
		if (cnt == cnt2) cout << "0" << endl;
		else {
			cout << "1" << endl;
			cout << (cnt - cnt2) * 2;
			for (int i = 0; i < n; ++ i) {
				if (i < n - cnt && s[i] == '1') cout << " " << i + 1;
				else if (i >= n - cnt && s[i] == '0') cout << " " << i + 1;
			}
			cout << endl;
		}
	}
	return 0;
}