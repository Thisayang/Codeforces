#include <bits/stdc++.h>
#define MAXN (200010)
using namespace std;

int Solve(int n)
{
	long long sum = 0;
	int ans = 1;
	long long tmp = 0;
	vector<long long> a(n);
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
		sum += a[i];
	}
	sum = sum / n;
	for (int i = 0; i < n; ++i) {
		if (a[i] < sum && tmp < sum - a[i]) {
			ans = 0;
			break;
		}
		tmp += a[i] - sum;
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
		cout << (Solve(n) ? "YES" : "NO") << endl;
	}
	return 0;
}