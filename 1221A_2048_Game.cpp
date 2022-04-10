#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int q, n, tmp;
	map<int, int> m;
	cin >> q;
	while (q --) {
		m.clear();
		cin >> n;
		for (int i = 0; i < n; ++ i) {
			cin >> tmp;
			m[tmp] ++;
		}
		for (int i = 1; i < 2048; i *= 2) {
			m[i * 2] = m[i * 2] + m[i] / 2;
		}
		cout << (m[2048] > 0 ? "YES" : "NO") << endl;
	}
	return 0;
}