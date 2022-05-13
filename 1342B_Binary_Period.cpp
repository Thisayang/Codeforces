#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t;
	string s;
	cin >> t;
	while (t --) {
		cin >> s;
		int cnt1 = 0, cnt2 = 0, sum1 = 0, sum2 = 0;
		for (int i = 0; s[i] != 0; ++ i) {
			if (s[i] == '0') {
				cnt1 = 1;
				sum1 ++;
			}
			else {
				cnt2 = 1;
				sum2 ++;
			}
		}
		if (cnt1 == cnt2) {
			for (int i = 0; i < s.length(); ++ i) {
				cout << "10";
			}
			cout << endl;
		} else {
			cout << s << endl;
		}
	}
	return 0;
}