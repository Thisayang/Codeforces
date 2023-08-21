#include <bits/stdc++.h>

using namespace std;

int Solve(int n, int k)
{
	int ans = 1;
	string str;
	string tmp;
	cin >> str;
	for (int i = 1; i < n; ++i) {
		cin >> tmp;
		if (str == tmp) {
			ans++;
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
	return 0;
}