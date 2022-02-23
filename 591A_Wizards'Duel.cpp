#include <bits\stdc++.h>
#define LL long long
#define ld long double
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	ld l, p, q;
	while(cin >> l >> p >> q) {
		cout << l / (p + q) * p << endl;
	}
	return 0;
}
