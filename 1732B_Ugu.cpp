#include <bits/stdc++.h>

using namespace std;

int Solve(int n)
{
	char s[n];
	int ans = 0;
	int flg = 0;
	for (int i = 0; i < n; ++i) {
		cin >> s[i];
	}
	for (int i = 0; i < n - 1; ++i) {
		if (s[i] == '1' && s[i + 1] == '0') {
			flg = 1;
		}
		if (s[i] != s[i + 1] && flg) {
			++ans;
		}
	}
	return ans;
}

int main(void)
{
	int t;
	int n;
	cin >> t;
	while (t--) {
		cin >> n;
		cout << Solve(n) << endl;
	}
	return 0;
}