#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, s, u, a, b, c, d, e, cnt = -10000;
	string name, ans;
	cin >> n;
	for (int i = 0; i < n; ++ i) {
		cin >> name >> s >> u >> a >> b >> c >> d >> e;
		int tmp = a + b + c + d + e + s * 100 - u * 50;
		if (tmp > cnt) {
			cnt = tmp;
			ans = name;
		}	
	}
	cout << ans << endl;
	return 0;
}