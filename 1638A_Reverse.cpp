#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n, a[510];
	cin >> t;
	while (t --) {
		cin >> n;
		for (int i = 0; i < n; ++ i) {
			cin >> a[i];
		}
		int flg1 = n, flg2 = n - 1;
		for (int i = 0; i < n; ++ i) {
			if (a[i] != i + 1) {
				flg1 = i;
				int min = a[i];
				for (int j = i + 1; j < n; ++ j) {
					if (min > a[j]) {
						min = a[j];
						flg2 = j;
					}
				}
				break;
			}
		}
		for (int i = 0; i < flg1; ++ i) {
			cout << a[i] << " ";
		}
		for (int i = flg2; i >= flg1; -- i) {
			cout << a[i] << " ";
		}
		for (int i = flg2 + 1; i < n; ++ i) {
			cout << a[i] << " ";
		}
		cout << endl;
	}
	return 0;
}