#include <bits\stdc++.h>
#define ll long long
#define ld long double
using namespace std;

struct ram {
	int mem, ins;
};

bool cmp(ram r1, ram r2) {
	return r1.mem < r2.mem;
}

int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n, m;
	cin >> t;
	while (t --) {
		cin >> n >> m;
		ram s[100];
		for (int i = 0; i < n; ++ i) {
			cin >> s[i].mem;
		}
		for (int i = 0; i < n; ++ i) {
			cin >> s[i].ins;
		}
		sort(s, s + n, cmp);
		for (int i = 0; i < n; ++ i) {
			if (m >= s[i].mem) {
				m += s[i].ins;
			}
		}
		cout << m << endl;
	}
	return 0;
}
