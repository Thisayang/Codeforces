#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, a, n) for (int i = a; i < int(n); ++ i)
#define ROF(i, a, n) for (int i = a; i > int(n); -- i)
const long long mod = 1e9 + 7;
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int k, tmp;
	string s;
	string c[] = {"S", "M", "L", "XL", "XXL"};
	vector<int> a(5, 0);
	FOR(i, 0, 5) cin >> a[i];
	cin >> k;
	while (k --) {
		cin >> s;
		FOR(i, 0, 5) {
			if (c[i] == s) tmp = i;
		}
		if (a[tmp] > 0) {
			cout << s << endl;
			a[tmp] --;
		} else {
			for (int i = tmp + 1, j = tmp - 1; ;) {
				if (i < 5 && a[i] > 0) {
					cout << c[i] << endl;
					a[i] --;
					break;
				} else if (a[j] > 0 && j > -1) {
					cout << c[j] << endl;
					a[j] --;
					break;
				}
				if (i <= 4) i ++;
				if (j >= 0) j --;
				if (i == 5 && j == -1) break;
			}
		}
	}
	return 0;
}