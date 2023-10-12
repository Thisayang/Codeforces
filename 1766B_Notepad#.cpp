#include <bits/stdc++.h>

using namespace std;

int Solve(int n)
{
	string s;
	vector<char> a(26, 0);
	cin >> s;
	for (int i = 0; i < n; ++i)
		++a[s[i] - 'a'];
	for (int i = n - 2; i > 1; --i) {
		if (a[s[i] - 'a'] == 1)
			continue;
		for (int j = i - 2; j >= 0; --j) {
			if (s[i] == s[j] && s[i + 1] == s[j + 1]) {
				return 1;
			}
		}
	}
	return 0;
}

int main(void)
{
	int t;
	int n;
	cin >> t;
	while (t--) {
		cin >> n;
		cout << (Solve(n) ? "YES" : "NO") << endl;
	}
	return 0;
}