#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n;
	vector<int> a(10010);
	cin >> n;
	for (int i = 1; i <= n; ++ i) {
		cin >> a[i];
	}
	int cnt = 0, flg = a[1];
	for (int i = 1; i <= n; ++ i) {
		flg = max(a[i], flg);
		if (i == flg) {
			cnt ++;
			flg = a[i + 1];
		}
	}
	cout << cnt << endl;
	return 0;
}