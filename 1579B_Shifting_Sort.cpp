#include <bits/stdc++.h>
#define ll long long int
using namespace std;
struct key {
	int st, end, r;
};
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n, a[60], b[60];
	cin >> t;
	while (t --) {
		cin >> n;
		for (int i = 0; i < n; ++ i) {
			cin >> a[i];
			b[i] = a[i];
		}
		sort(a, a + n);
		queue<key> q; 
		for (int i = 0; i < n; ++ i) {
			if (a[i] != b[i]) {
				key tmp;
				tmp.st = i + 1;
				for (int j = i + 1; j < n; ++ j) {
					if (a[i] == b[j]) {
						tmp.end = j + 1;
						for (int k = j; k > i; -- k) {
							b[k] = b[k - 1];
						}
						break;
					}
				} 
				b[i] = a[i];
				tmp.r = tmp.end - tmp.st;
				q.push(tmp);
			} 
		}
		cout << q.size() << endl;
		while (!q.empty()) {
			key t = q.front();
			cout << t.st << " " << t.end << " " << t.r << endl;
			q.pop();
		}
	}
	return 0;
}