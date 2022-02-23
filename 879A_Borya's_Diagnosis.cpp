#include <bits\stdc++.h>
#define ll long long
#define ld long double
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, s, d;
	while(cin >> n) {
		int ans = 0;
		for(int i = 0; i < n; ++ i) {
			cin >> s >> d;
			while(ans >= s) s += d;
			ans = s;
		}
		cout << ans << endl;
	}
	return 0;
}
