#include <bits\stdc++.h>
#define ll long long
#define ld long double
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n, a[110];
	while(cin >> t) {
		while(t --) {
			cin >> n;
			int s[110] = {0};
			for(int i = 0; i < n; ++ i) cin >> a[i], s[a[i]] ++;
			sort(a, a + n);
			if(a[0] == a[1]) cout << n - s[a[0]] << endl;
			else cout << n - 1 << endl;
		}
	}
	return 0;
}
