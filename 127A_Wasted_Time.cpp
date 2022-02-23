#include <bits\stdc++.h>
#define ll long long
#define ld long double
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, k, x[110], y[110];
	while(cin >> n >> k) {
		for(int i = 0; i < n; ++ i) cin >> x[i] >> y[i];
		ld sum = 0.0;
		for(int i = 1; i < n; ++ i) {
			int tx = x[i] - x[i - 1];
			int ty = y[i] - y[i - 1];
			sum += sqrt(tx * tx + ty * ty);
		}
		sum *= k;
		cout << setprecision(10) << sum / 50 << endl;
	}
	return 0;
}
