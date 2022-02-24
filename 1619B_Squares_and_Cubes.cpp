#include <bits\stdc++.h>
#define ll long long
#define ld long double
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n;
	cin >> t;
	while (t --) {
		cin >> n;
		int x = int(sqrt(n)), y = int(pow(n, 1.0 / 3)), cnt = x + y + 1;
		for (int i = 1; i <= y + 1; ++ i) {
			int num = i * i * i, s = int(sqrt(num));
			if (num == s * s || num > n) cnt --;
		}
		cout << cnt << endl;
	}
	return 0;
}
