#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, cnt1, cnt2;
	string s;
	cin >> t;
	while (t --) {
		cin >> s;
		int sum = 0;
		for (int i = 0; s[i] != 0; ++ i) {
			sum += s[i] - 'a' + 1;
		}
		int len = s.length();
		cnt1 = s[0] - 'a' + 1;
		cnt2 = s[len - 1] - 'a' + 1;
		if (len % 2 == 0) cout << "Alice " <<  sum << endl;
		else if (len % 2 == 1 && len != 1) cout << "Alice " << sum - min(cnt1, cnt2) * 2 << endl;
		else cout << "Bob " << sum << endl;
	}
	return 0;
}