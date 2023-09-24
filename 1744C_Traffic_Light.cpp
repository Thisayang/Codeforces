#include <bits/stdc++.h>

using namespace std;

int Solve(int n, char c)
{
	string s;
	cin >> s;
	s += s;
	int ans = 0;
	for (int i = 0; i < n; ++i) {
		if (s[i] != c) {
			continue;
		}
		for (int j = 0; j < n; ++j) {
			if (s[i + j] == 'g') {
				ans = max(ans, j);
				i = i + j;
				break;
			}
		}
	}
	return ans;
}

int main(void)
{
	int t;
	int n;
	char c;
	cin >> t;
	while (t--) {
		cin >> n >> c;
		cout << Solve(n, c) << endl;
	}
	return 0;
}