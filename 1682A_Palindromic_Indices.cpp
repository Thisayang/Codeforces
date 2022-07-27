#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n;
	string s;
	cin >> t;
	while (t --) {
		cin >> n >> s;
		int cnt = 0;
		for (int i = (n - 1) / 2; i >= 0; -- i) {
			if (s[i] == s[(n - 1) / 2]) ++ cnt;
			else break;
		}
		cout << 2 * cnt - (n & 1) << endl;
	}
	return 0;
}