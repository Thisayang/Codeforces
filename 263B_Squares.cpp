#include <bits\stdc++.h>
#define ll long long
#define ld long double
using namespace std;
bool cmp(int a, int b) {
	return a > b;
}
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, k, s[60];
	while(cin >> n >> k) {
		for(int i = 0; i < n; ++ i) cin >> s[i];
		sort(s, s + n, cmp);
		if(n < k) cout << -1 << endl;
		else cout << s[k - 1] << ' ' << s[k - 1] << endl;
	}
	return 0;
}
