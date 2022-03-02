#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n;
	int a[10000] = {1, 1};
	for (int i = 2; i <= 100; ++ i) {
		for (int j = 2; i * j <= 10000; ++ j) {
			a[i * j] = 1;
		}
	}
	cin >> t;
	while (t --) {
		cin >> n;
		for (int i = 2, cnt = 0; cnt < n; ++ i) {
			if (a[i] == 0) {
				cout << i << " ";
				cnt ++;
			}
		}
		cout << endl;
	}
	return 0;
}