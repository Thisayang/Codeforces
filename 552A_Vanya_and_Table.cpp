#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	ll n, x[4], sum = 0;
	cin >> n;
	for (int i = 0; i < n; ++ i) {
		for (int j = 0; j < 4; ++ j) {
			cin >> x[j];
		}
		sum += ((abs(x[2] - x[0]) + 1) * (abs(x[3] - x[1]) + 1));
	}
	cout << sum << endl;
	return 0;
}