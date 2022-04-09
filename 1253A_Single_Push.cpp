#include <bits/stdc++.h>
#define ll long long int
using namespace std;
void print(int i) {
	if (i == 0) cout << "NO" << endl;
	else cout << "YES" << endl;
}
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n;
	vector <int> a(100010), b(100010);
	cin >> t;
	while (t --) {
		cin >> n;
		queue<int> q;
		int flg = 1;
		for (int i = 0; i < n; ++ i) {
			cin >> a[i];
		}
		for (int i = 0; i < n; ++ i) {
			cin >> b[i];
			a[i] = b[i] - a[i];
			if (a[i] < 0) {
				flg = 0;
			} else if (a[i] > 0) q.push(i);
		}
		if (flg == 0) {
			cout << "NO" << endl;
		} else if (q.empty()) {
			cout << "YES" << endl;
		} else {
			int key = q.front(), value = a[key];
			q.pop();
			while (!q.empty()) {
				if (q.front() - key > 1 || a[q.front()] != value) {
					flg = 0;
					break;
				}
				key = q.front();
				q.pop();
			}
			print(flg);
		}
	}
	return 0;
}