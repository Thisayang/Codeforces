#include <bits/stdc++.h>

using namespace std;

int Solve(int n, int k, string s)
{
	int ans = 0;
	vector<int> a(26, 0), b(26, 0);
	for (char c : s) {
		if (c >= 'a' && c <= 'z') {
			a[c - 'a']++;
			continue;
		}
		b[c - 'A']++;
	}
	for (int i = 0; i < 26; ++i) {
		int tmp = min(a[i], b[i]);
		ans += tmp;
		a[i] = a[i] + b[i] - 2 * tmp;
		if (k > 0) {
			tmp = (a[i] / 2 < k ? a[i] / 2 : k);
			ans += tmp;
			k -= tmp;
		}
	}
	return ans;
}

int main(void)
{
	int t;
	int n;
	int k;
	string s;
	cin >> t;
	while (t--) {
		cin >> n >> k >> s;
		cout << Solve(n, k, s) << endl;
	}
	return 0;
}