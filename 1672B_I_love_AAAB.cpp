#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t;
	string s, x;
	cin >> t;
	while (t --) {
		cin >> s;
		bool ok = (s.back() == 'B');
		int cnt = 0;
		for (int i = 0; s[i] != 0; ++ i) {
			if (s[i] == 'A') cnt ++;
			else cnt --;
			if (cnt < 0) ok = false;
		}
		if (!ok) cout << "NO" << endl;
		else cout << "YES" << endl;
	}
	return 0;
}