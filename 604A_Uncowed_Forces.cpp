#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int m[5], w[5], h, s;
	double sum = 0, t = 1.0 / 250;
	for (int i = 0; i < 5; ++ i) {
		cin >> m[i];
	}
	for (int i = 0; i < 5; ++ i) {
		cin >> w[i];
	}
	cin >> h >> s;
	for (int i = 0; i < 5; ++ i) {
		int x = (1 + i) * 500;
		sum += max(0.3 * x, (1.0 - m[i] * t) * x - 50.0 * w[i]);
	}
	sum += h * 100;
	sum -= s * 50;
	int ans = int(sum);
	if (sum - int(sum) >= 0.5) ans ++; 
	cout << ans << endl;
	return 0;
}