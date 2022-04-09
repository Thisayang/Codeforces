#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	ll n, k, sum = -1, cnt = 0;
	cin >> n >> k;
	while (sum != k) {
		cnt ++;
		sum = (cnt + 1) * cnt / 2 - (n - cnt);
	}
	cout << n - cnt << endl;
	return 0;
}