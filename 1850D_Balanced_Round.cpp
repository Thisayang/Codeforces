#include <bits/stdc++.h>

using namespace std;

int Solve(int n, int k)
{
	vector<int> a(n);
	int ans = 0;
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
	}
	sort(a.begin(), a.end());
	for (int i = 1; i < n; ++i) {
		if (a[i] - a[i - 1] > k) {
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
		cin >> n;
		cout << Solve(n, k) << endl;
	}
}