#include <bits/stdc++.h>

using namespace std;

int Solve(string s)
{
	if (s == "(" || s == ")" || s == "()") {
		cout << "NO" << endl;
		return 0;
	}
	cout << "YES" << endl;
	int flg = 0;
	for (int i = 1; s[i] != 0; ++i) {
		if (s[i] == s[i - 1]) {
			flg = 1;
			break;
		}
	}
	if (flg == 1) {
		for (int i = 0; s[i] != 0; ++i)
			cout << "()";
	} else {
		for (int i = 0; s[i] != 0; ++i)
			cout << "(";
		for (int i = 0; s[i] != 0; ++i)
			cout << ")";
	}
	cout << endl;
	return 0;
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
	return 0;
}