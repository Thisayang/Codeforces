#include <bits/stdc++.h>

using namespace std;

string Solve(string s)
{
	for (int i = 0; s[i] != 0; ++i) {
		if (s[i] == '?' && (i == 0 || s[i - 1] == '0')) {
			s[i] = '0';
		} else if (s[i] == '?') {
			s[i] = '1';
		}
	}
	return s;
}

int main(void)
{
	int n;
	string s;
	cin >> n;
	while (n--) {
		cin >> s;
		cout << Solve(s) << endl;
	}
	return 0;
}