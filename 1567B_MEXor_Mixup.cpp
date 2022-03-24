#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, a, b, ans;
	cin >> t;
	while (t --) {
		cin >> a >> b;
		if (a % 4 ==  1) ans = a - 1;
		else if (a % 4 == 2) ans = 1;
		else if (a % 4 == 3) ans = a;
		else ans = 0;
		if (b == ans) cout << a << endl;
		else if ((b ^ ans) != a) cout << a + 1 << endl;
		else cout << a + 2 << endl;
	}
	return 0;
}