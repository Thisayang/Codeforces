#include <bits\stdc++.h>
#define ll long long
#define ld long double
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int c, v0, v1, a, l;
	while(cin >> c >> v0 >> v1 >> a >> l) {
		int ans = 0, end = 0;
		while(end < c) {
			if(ans != 0) end -= l;
			int tmp = min(v0 + ans * a, v1);
			ans ++;
			end += tmp;
		}
		cout << ans << endl;
	}
	return 0;
}
