#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, a1, a2, a3;
	cin >> t;
	while (t --) {
		cin >> a1 >> a2 >> a3;
		int sum = a1 + a3;
		cout << (abs(sum - 2 * a2) % 3 == 0 ? 0 : 1) << endl; 
	}
	return 0;
}