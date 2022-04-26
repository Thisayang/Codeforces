#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, a, ans, flg1, flg2;
	cin >> n;
	queue<int> q;
	for (int i = 0; i < n; ++ i) {
		cin >> a;
		if (a == 1) q.push(i);
	}
	if (q.empty()) ans = 0;
	else {
		ans = 1;
		flg1 = q.front();
		q.pop();
		while(!q.empty()) {
			flg2 = q.front();
			if (flg2 - flg1 < 3) ans += flg2 - flg1;
			else ans += 2;
			flg1 = flg2;
			q.pop();
		}
	}
	cout << ans << endl;
	return 0;
}