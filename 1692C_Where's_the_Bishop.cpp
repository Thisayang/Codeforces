#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t;
	string s[10];
	int x[] = {1, 1, -1, -1}, y[] = {1, -1, 1, -1};
	cin >> t;
	while (t --) {
		map <pair<int, int>, int> mp;
		for (int i = 0; i < 8; ++ i) {
			cin >> s[i];
		}
		for (int i = 0; i < 8; ++ i) {
			for (int j = 0; j < 8; ++ j) {
				int flg = 0, stx, sty;
				if (s[i][j] == '#') {
					for (int k = 0; k < 4; ++ k) {
						stx = x[k] + i;
						sty = y[k] + j;
						if (stx > -1 && stx < 8 && sty > -1 && sty < 8) {
							if (s[stx][sty] == '#') flg ++;
							else flg --;
						}
					}
				}
				if (flg > 0) {
					pair<int, int> p = make_pair(i + 1, j + 1);
					mp[p] = flg;
				}
			}
		}
		int cnt = 0;
		pair<int, int> p;
		for (auto it = mp.begin(); it != mp.end(); ++ it) {
			if (it -> second > cnt) {
				cnt = it -> second;
				p = it -> first;
			}
		}
		cout << p.first << " " << p.second << endl;
	}
	return 0;
}