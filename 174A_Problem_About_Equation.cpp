#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, a, n) for (int i = a; i < int(n); ++ i)
#define ROF(i, a, n) for (int i = a; i > int(n); -- i)
const long long mod = 1e9 + 7;
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, flg = 0;
	double b, sum = 0.0, av = 0.0;
	cin >> n >> b;
	sum += b;
	vector<int> a(n);
	FOR(i, 0, n) {
		cin >> a[i];
		sum += a[i];
	}
	av = sum / n;
	queue<double> q;
	FOR(i, 0, n) {
		if (a[i] > av || abs(av - a[i] > b)) flg = -1;
		else q.push(abs(av - a[i]));
	}
	if (flg == -1) cout << -1 << endl;
	else {
		while(!q.empty()) {
			printf("%.6lf\n", q.front());
			q.pop();
		}
	}
	return 0;
}