#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n, s, z;
	cin >> t;
	while (t --) {
		cin >> n >> s;
		if (n % 2 == 1) {
			n += 1;
		} else {
			n += 2;
		}
		z = n / 2;
		cout << s / z << endl;
	}
	return 0;
}