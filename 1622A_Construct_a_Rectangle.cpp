#include <bits\stdc++.h>
#define ll long long
#define ld long double
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, a, b, c;
	cin >> t;
	while (t --) {
		cin >> a >> b >> c;
		int sum = a + b + c, MAX = max(max(a, b), c), MIN = min(min(a, b), c);
		if (MAX - MIN == sum - MAX - MIN) cout << "YES" << endl;
		else if (MAX == sum - MAX - MIN && MIN % 2 == 0) cout << "YES" << endl;
		else if (MIN == sum - MAX - MIN && MAX % 2 == 0) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	return 0;
}
