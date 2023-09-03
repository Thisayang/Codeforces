#include <bits/stdc++.h>

using namespace std;

int Solve(int n)
{
	string s;
	cin >> s;
	vector<int> cnt(26, 0);
	int ans = 0;
	for (char c : s) {
		++cnt[c - 'a'];
	}
	for (int i = 0; i < 26; ++i) {
		if (cnt[i] >= 2) {
			ans += 2;
		} else {
			ans += cnt[i];
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