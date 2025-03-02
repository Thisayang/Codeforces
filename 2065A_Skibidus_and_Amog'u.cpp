#include <bits/stdc++.h>

using namespace std;

void solve(string s) {
	for (int i = 0; i < s.length() - 2; ++i) {
		cout << s[i];
	}
	cout << 'i' << endl;
	return ;
}

int main(void) {
	int t;
	string s;
	cin >> t;
	while (t--) {
		cin >> s;
		solve(s);
	}
	return 0;
}