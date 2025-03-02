#include <bits/stdc++.h>

using namespace std;

int Solve(int n)
{
	int ans = 0;
	string s;
	cin >> s;
	for (int i = 0; i < n; ++i) {
		if (s[i] == '+') {
			++ans;
		} else {
			--ans;
		}
	}
	return abs(ans);
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