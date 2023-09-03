#include <bits/stdc++.h>

using namespace std;

int Solve(int n, int k)
{
	string s;
	cin >> s;
	vector<int> cnt(26, 0);
	for (char c : s) {
		cnt[c - 'a']++;
	}
	string ans = "";
	for (int i = 0; i < min(25, n / k); ++i) {
		while (k - ans.size() > cnt[i]) {
			ans.push_back(i + 'a');
		}
	}
	char c = 'a' + min(n / k, 25);
	while (k > ans.size()) {
		ans += c;
	}
	reverse(ans.begin(), ans.end());
	cout << ans << "\n";
	return 0;
}

int main(void)
{
	int t;
	int n;
	int k;
	cin >> t;
	while (t--) {
		cin >> n >> k;
		Solve(n, k);
	}
	return 0;
}