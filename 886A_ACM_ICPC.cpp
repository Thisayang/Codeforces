#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int a[6], sum = 0, flg = 0;
	for (int i = 0; i < 6; ++ i) {
		cin >> a[i];
		sum += a[i];
	}
	for (int i = 0; i < 4; ++ i) {
		for (int j = i + 1; j < 5; ++ j) {
			for (int k = j + 1; k < 6; ++ k) {
				if ((sum - a[i] - a[j] - a[k]) * 2 == sum) flg = 1;
			}
		}
	}
	cout << (flg == 1 ? "YES" : "NO") << endl;
	return 0;
}