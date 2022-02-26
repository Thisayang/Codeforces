#include <bits/stdc++.h>
#define ll long long int
using namespace std;
bool Ispalindrome(string s, int st, int en) {
	for (; st < en; st ++, en --) {
		if(s[st] != s[en]) {
			return false;
		}
	}
	return true;
}
bool solve(string s, int len) {
	for (int i = 0; i < len - 1; ++ i) {
		for (int j = 2; j <= len - i; ++ j) {
			string sub = s.substr(i, j);
			if (Ispalindrome(sub, 0, j - 1)) {
				return true;
			}
		}
	}
	return false;
}
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n;
	string s;
	cin >> t;
	while (t --) {
		cin >> n >> s;
		cout << (solve(s, n) ? "NO" : "YES") << endl;
	}
	return 0;
}