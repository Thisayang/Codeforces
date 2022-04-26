#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, a[110], flg = 0;
	cin >> n;
	for (int i = 0; i < n; ++ i) {
		cin >> a[i];
	}
	for (int i = 1; i < n - 1; ++ i) {
		if (a[i - 1] == a[i] && a[i] < a[i + 1]) {
			flg = 1;
			break;
		} else if (a[i - 1] > a[i] && a[i] < a[i + 1]) {
			flg = 1;
			break;
		} else if (a[i - 1] > a[i] && a[i] == a[i + 1]) {
			flg = 1;
			break;
		}
	}
	cout << (flg == 1 ? "NO" : "YES") << endl;
	return 0;
}