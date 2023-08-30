#include <bits/stdc++.h>

using namespace std;

int Solve(int n) {
	string str;
	int ans = 1;
	int tmp = 1;
	cin >> str;
	for (int i = 1; i < n; ++i) {
		if (str[i] == str[i - 1]) {
			tmp++;
		} else {
			ans = max(ans, tmp);
			tmp = 1;
		}
	}
	ans = max(ans, tmp);
	return ans + 1;
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