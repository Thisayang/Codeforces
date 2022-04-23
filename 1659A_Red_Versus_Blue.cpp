#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n, r, b;
	cin >> t;
	while (t --) {
		cin >> n >> r >> b;
		int tmp = r / (b + 1), t = r % (b + 1);
		for (int i = 0; i < b + 1; ++ i) {
			for (int j = 0; j < tmp; ++ j) cout << 'R';
			if (i < t) cout << "R";
			if (i != b) cout << "B";
		}
		cout << endl;
	}
	return 0;
}