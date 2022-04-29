#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, ans = -1, flg = -1;
	vector<int> a(100010);
	cin >> n;
	for (int i = 0; i < n; ++ i) {
		cin >> a[i];
	}
	for (int i = 0; i < n; ++ i) {
		if (a[i] <= flg + 1) {
			if (a[i] == flg + 1) {
				flg = a[i];
			}
		} else {
			ans = i + 1;
			break;
		}
	}
	cout << ans << endl;
	return 0;
}