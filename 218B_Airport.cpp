#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, a, n) for (int i = a; i < int(n); ++ i)
#define ROF(i, a, n) for (int i = a; i > int(n); -- i)
const long long mod = 1e9 + 7;
using namespace std;
bool cmp(int a, int b) {
	return a > b;
}
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, m, a[1010], b[1010], sum = 0;
	cin >> n >> m;
	FOR(i, 0, m) {
		cin >> a[i];
		b[i] = a[i];
		sum += a[i];
	}
	int max = 0, min = 0;
	if (n == sum) {
		FOR(i, 0, m) {
			max += (a[i] + 1) * a[i] / 2;
		}
		min = max;
	} else {
		FOR(i, 0, n) {
			sort(b, b + m, cmp);
			max += b[0];
			b[0] --;
		}
		sort(a, a + m);
		FOR(i, 0, n) {
			FOR(j, 0, m) {
				if (a[j] != 0) {
					min += a[j];
					a[j] --;
					break;
				}
			}
		}
	}
	cout << max << " " << min << endl;
	return 0;
}