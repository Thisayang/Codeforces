#include <bits/stdc++.h>

using namespace std;

int loop(vector<int> &a, int i) {
	for (int j = i + 1; j < a.size(); ++j) {
		if (a[j] > 0) {
			return j;
    	}
	}
	return a.size();
}

int Solve(int n)
{
	vector<int> a(n);
	int ans = 0;
	long long sum = 0;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		sum += abs(a[i]);
	}
	for (int i = 0; i < n; ++i) {
		if (a[i] < 0) {
			ans++;
			i = loop(a, i);
		}
	}
	cout << sum << " " << ans << endl;
	return 0;
}

int main()
{
    int t;
	int n;
	cin >> t;
	while (t--) {
		cin >> n;
		Solve(n);
	}
	return 0;
}