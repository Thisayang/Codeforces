#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, k, a[1010] = {1, 1}, cnt = 0;
	for (int i = 2; i < 40; ++ i) {
		if (a[i] == 1) continue;
		for (int j = 2; i * j < 1001; ++ j) a[i * j] = 1;
	}
	cin >> n >> k;
	for (int i = 3; i < 1000; ++ i) {
		if (a[i] == 1) continue;
		for (int j = i + 1; j < 1000; ++ j) {
			if (a[j] == 1) continue;
			else {
				if (1 + i + j <= n && a[1 + i + j] == 0) {
					cnt ++ ;
				}
				break;
			}
		}
	}
	cout << (cnt >= k ? "YES" : "NO") << endl;
	return 0;
}