#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n;
	cin >> t;
	while (t --) {
		cin >> n;
		int max = 0;
		while (n > 0) {
			int tmp = n % 10;
			max = tmp > max ? tmp : max;
			n /= 10;
		}
		cout << max << endl;
	}
	return 0;
}