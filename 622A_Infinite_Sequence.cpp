#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	ll n, sum = 0;
	cin >> n;
	for (int i = 1; sum < n; ++ i) {
		if (sum + i >= n) {
			cout << n - sum << endl;
			break;
		} else sum += i;
	}
	return 0;
}