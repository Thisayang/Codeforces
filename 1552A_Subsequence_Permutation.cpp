#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n;
	cin >> t;
	while (t --) {
		string s, t;
		cin >> n >> s;
		t = s;
		sort(t.begin(), t.end());
		int cnt = 0;
		for (int i = 0; i < n; ++ i) {
			if (s[i] != t[i]) {
				cnt ++;
			}
		}
		cout << cnt << endl;
	}
	return 0;
}