#include <bits/stdc++.h>

using namespace std;

int Solve(int n, int k)
{
	vector<int> a(n);
	int cnt0 = 0;
	int cnt1 = 0;
	int end = 0;
	int flg = 0;
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
		if (a[i] == a[0])
			++cnt0;
		if (cnt0 == k && flg == 0) {
			flg = 1;
			end = i;
		}
	}
	for (int i = n - 1; i > end; --i) {
		if (a[i] == a[n - 1])
			++cnt1;
	}
	if (a[0] == a[n - 1] && cnt0 >= k) {
		return 0;
	} else if(cnt0 >= k && cnt1 >= k) {
		return 0;
	}
	return -1;
}

int main()
{
	int t;
	int n;
	int k;
	cin >> t;
	while (t--) {
		cin >> n >> k;
		cout << (Solve(n, k) ? "NO" : "YES") << endl;
	}
	return 0;
}