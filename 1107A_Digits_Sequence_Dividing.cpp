#include <bits\stdc++.h>
#define ll long long
#define ld long double
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int q, n;
	string s;
	while(cin >> q) {
		while(q --) {
			cin >> n >> s;
			if(n == 2 && s[0] >= s[1]) cout << "NO" << endl;
			else {
				cout << "YES" << endl;
				cout << 2 << endl;
				cout << s[0] << ' ' << s.substr(1) << endl;
			}
		}
	}
	return 0;
}
