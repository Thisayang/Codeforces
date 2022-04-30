#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, k, a[110], x[110][2] = {0}, sum = 0;
	cin >> n >> k;
	for (int i = 0; i < n; ++ i) {
		cin >> a[i];
	}
	for (int i = 0; i < n; ++ i) {
		if (a[i] == 1) x[i % k][0] ++;
		else x[i % k][1] ++;
	}
	for (int i = 0; i < k; ++ i) {
		sum += min(x[i][0], x[i][1]);
	}
	cout << sum << endl;
	return 0;
}