#include <bits/stdc++.h>

using namespace std;

void Solve(string &s)
{
	if (s[0] == s[1] || (s[0] == 'b' && s[1] == 'a')) {
		cout << s[0] << ' ' << s[1] << ' ';
		for (int i = 2; i < s.length(); ++i) {
			cout << s[i];
		}
	} else {
		cout << s[0] << ' ';
		for (int i = 1; i < s.length() - 1; ++i) {
			cout << s[i];
		}
		cout << ' ' << s[s.length() -1];
	}
	cout << endl;
}

int main(void)
{
	int t;
	string s;
	cin >> t;
	while (t--) {
		cin >> s;
		Solve(s);
	}
}
