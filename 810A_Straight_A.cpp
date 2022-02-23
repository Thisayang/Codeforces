#include <bits\stdc++.h>
#define ll long long
#define ld long double
using namespace std;
inline int num(float s) {
	if(s - (int)s >= 0.5) return (int)s + 1;
	else return (int)s;
}
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, k, a;
	while(cin >> n >> k) {
		ld sum = 0;
		int ans = 0;
		for(int i = 0; i < n; ++ i) {
			cin >> a;
			sum += a;
		}
		while(num(sum / (n + ans)) < k) {
			ans ++;
			sum += k;
		}
		cout << ans << endl;
	}
	return 0;
}
