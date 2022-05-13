#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int k, cnt = 0;
	cin >> k;
	for (int i = 19; cnt < k; ++ i) {
		int tmp = i, sum = 0;
		while (tmp > 0) {
			sum += tmp % 10;
			if (sum > 10) break;
			tmp /= 10;
		}
		if (sum == 10) cnt ++;
		if (cnt == k) cout << i << endl;
	}
	return 0;
}