#include <bits\stdc++.h>
#define ll long long
#define ld long double
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, p1, p2, p3, t1, t2, l[110], r[110];
	while(cin >> n >> p1 >> p2 >> p3 >> t1 >> t2) {
		for(int i = 0; i < n; ++ i) cin >> l[i] >> r[i];
		int sum = 0;
		for(int i = 0; i < n; ++ i) {
			sum += p1 * (r[i] - l[i]);
			if(i + 1 < n) {
				int tmp = l[i + 1] - r[i];
				int x = min(tmp, t1);
				sum += p1 * x;
				tmp -= x;
				sum += p2 * min(tmp, t2);
				tmp -= min(tmp, t2);
				sum += p3 * tmp;
			}
		}
		cout << sum << endl;
	}
	return 0;
}
