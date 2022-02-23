#include <bits\stdc++.h>
#define ll long long
#define ld long double
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, s, a[1010], b[1010];
	while(cin >> n >> s) {
		int sum[1010] = {0};
		bool flg = 0;
		for(int i = 1; i <= n; ++ i) cin >> a[i], sum[i] += a[i];
		for(int i = 1; i <= n; ++ i) cin >> b[i], sum[i] += b[i];
		for(int i = s; i <= n; ++ i) {
			if(sum[i] == 2) flg = 1;
		}
		if(a[1] == 0 || (a[s] == 0 && b[s] == 0) || (a[s] == 0 && flg == 0)) cout << "NO" << endl;
		else cout << "YES" << endl;
	}
	return 0;
}
