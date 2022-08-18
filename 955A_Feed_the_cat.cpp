#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, a, n) for (int i = a; i < int(n); ++ i)
#define ROF(i, a, n) for (int i = a; i > int(n); -- i)
const long long mod = 1e9 + 7;
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int h, m, H, D, C, N, t = 1200;
	cin >> h >> m >> H >> D >> C >> N;
	int th = h * 60 + m;
	double s1 = (H + N - 1) / N * C;
	double s2 = (H + (t - th) * D + N - 1) / N * C * 0.8;
	if (th >= 1200) {
		s1 = s1 * 0.8;
		cout << s1 << endl;
	} else {
		cout << min(s1, s2) << endl;
	}
	return 0;
}