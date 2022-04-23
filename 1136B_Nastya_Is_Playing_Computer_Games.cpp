#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, k;
	cin >> n >> k;
	int ans = n * 3;
	int mn = min(k - 1, n - k);
	cout << ans + mn << endl;
	return 0;
}