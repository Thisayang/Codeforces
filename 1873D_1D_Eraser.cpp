#include <bits/stdc++.h>

using namespace std;

int Solve(int n, int k)
{
	string s;
	int ans = 0;
	cin >> s;
	for (int i = 0; i < n; ++i) {
		if (s[i] == 'B') {
			++ans;
			i += k - 1;
		}
	}
	return ans;
}

int main(void)
{
	int t;
	int n;
	int k;
	cin >> t;
	while (t--) {
		cin >> n >> k;
		cout << Solve(n, k) << endl;
	}
}