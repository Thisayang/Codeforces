#include <bits\stdc++.h>
#define LL long long
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int q, a, b, c;
	while(cin >> q) {
		while(q --) {
			cin >> a >> b >> c;
			int sum = abs(a - b) + abs(a - c) + abs(b - c);
			int Min = min(sum, abs(sum - 2));
			Min = min(Min, abs(sum - 4));
			cout << Min << endl;
		}
	}
	return 0;
}
