#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n;
	string s, r;
	cin >> t;
	while (t --) {
		cin >> n >> s >> r;
		int sum = 0;
		for (int i = 0; i < n; ) {
			if ((s[i] == '1' && r[i] == '0') || s[i] == '0' && r[i] == '1') {
				sum += 2;
			} else if ((s[i] == '1' && s[i + 1] == '0' && r[i] == '1' && r[i + 1] == '0')
				|| (s[i] == '0' && s[i + 1] == '1' && r[i] == '0' && r[i + 1] == '1')) {
				sum += 2;
				++ i;
			} else if (s[i] == '0' && r[i] == '0') {
				sum += 1;
			}
			++ i;
		}
		cout << sum << endl;
	}
	return 0;
}