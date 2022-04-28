#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, cnt = 0;
	string s, t[] = {"jolteon", "flareon", "umbreon", "leafeon", "glaceon", "sylveon"};
	cin >> n >> s;
	if (n == 6) {
		cout << "espeon" << endl;
	} else if (n == 8) {
		cout << "vaporeon" << endl;
	} else {
		for (int i = 0; i < n; ++ i) {
			for (int j = 0; j < 7; ++ j) {
				if (s[j] == t[i][j] || s[j] == '.') {
					cnt ++;
				} else if (s[j] != '.') {
					break;
				}
			}
			if (cnt == 7) {
				cout << t[i] << endl;
				break;
			}
			cnt = 0;
		}
	}
	return 0;
}