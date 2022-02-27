#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n;
	cin >> t;
	while (t --) {
		cin >> n;
		string s, ans = "";
		queue <char> q;
		for (int i = 0; i < n - 2; ++ i) {
			cin >> s;
			q.push(s[0]);
			q.push(s[1]);
		}
		ans += q.front();
		q.pop();
		int cnt = 1;
		while (q.size() > 1) {
			char t = q.front();
			q.pop();
			char r = q.front();
			q.pop();
			ans += t;
			cnt ++;
			if (t != r) {
				ans += r;
				cnt ++;
			}
		}
		ans += q.front();
		cnt ++;
		if (cnt < n) ans += 'a';
		cout << ans << endl;
	}
	return 0;
}