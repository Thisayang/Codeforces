#include <bits/stdc++.h>
#define ll long long int
using namespace std;
bool solve(string s) {
	deque <char> str;
	for (auto c : s) {
		str.emplace_back(c);
	}
	int len = s.length();
	for (int i = len - 1; i >= 0; -- i) {
		if (i + 'a' == str.front()) {
			str.pop_front();
		} else if (i + 'a' == str.back()) {
			str.pop_back();
		} else {
			return false;
		}
	}
	return true;
}
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t;
	cin >> t;
	while (t --) {
		string s;
		cin >> s;
		cout << (solve(s) ? "YES" : "NO") << endl;
	}
	return 0;
}