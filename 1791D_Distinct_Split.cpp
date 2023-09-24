#include <bits/stdc++.h>

using namespace std;

int Solve(int n)
{
	string s;
	cin >> s;
	vector<int> cnt(26, 0);
	set<char> right;
	int left = 0;
	for (char c : s)
		++cnt[c - 'a'];
	for (int i = 0; i < 26; ++i) {
		if (cnt[i] > 0)
			++left;
	}
	int ans = left;
	for (char c : s) {
		if (right.find(c) == right.end())
			right.insert(c);
		--cnt[c - 'a'];
		if (cnt[c - 'a'] == 0)
			--left;
		ans = max(left + int(right.size()), ans);
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