#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int a, n, flg = 0;
	deque<ll> de;
	set<ll> sett;
	cin >> a >> n;
	de.push_back(a);
	while (!de.empty()) {
		ll tmp = de.back();
		if (sett.find(tmp) == sett.end()) {
			sett.insert(tmp);
		} else {
			de.pop_back();
			continue;
		}
		if (tmp * 2 <= n) {
			de.push_back(tmp * 2);
			if (tmp * 2 == n) {
				flg = 1;
				break;
			}
		} else {
			de.pop_back();
			continue;
		}
		if (tmp * 10 + 1 <= n) {
			de.push_back(tmp * 10 + 1);
			if (tmp * 10 + 1 == n) {
				flg = 1;
				break;
			}
		}
	}
	if (flg == 1) {
		cout << "YES" << endl;
		stack<int> s;
		while (!de.empty()) {
			if (de.back() == n || de.back() * 2 == n || de.back() * 10 + 1 == n) {
				s.push(de.back());
				n = de.back();
			}
			de.pop_back();
		}
		cout << s.size() << endl;
		while (!s.empty()) {
			cout << s.top() << " ";
			s.pop();
		}
	} else cout << "NO" << endl;
	return 0;
}