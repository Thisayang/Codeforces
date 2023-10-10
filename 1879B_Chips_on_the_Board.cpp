#include <bits/stdc++.h>

using namespace std;

long long Solve(int n)
{
	vector<long long> a(n, 0);
	vector<long long> b(n, 0);
	long long sum1 = 0;
	long long sum2 = 0;
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
		sum1 += a[i];
	}
	for (int i = 0; i < n; ++i) {
		cin >> b[i];
		sum2 += b[i];
	}
	long long min1 = *min_element(a.begin(), a.begin() + n);	
	long long min2 = *min_element(b.begin(), b.begin() + n);
	sum1 += min2 * n;
	sum2 += min1 * n;
	return min(sum1, sum2);
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