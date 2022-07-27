#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n, k;
	string s;
	cin >> t;
	while (t --) {
		cin >> n >> k >> s;
		int st = 0, end = 0, cnt = 0;
		for (int i = 0; i < n; ++ i) {
			if (s[i] == '*') {
				cnt ++;
				s[i] = 'x';
				st = i;
				end = i;
				break;
			}
		}
		for (int i = n - 1; i > st; -- i) {
			if (s[i] == '*') {
				cnt ++;
				end = i;
				break;
			}
		}
		while (end - st > k) {
			if (s[st + k] == '*') {
				st = st + k;
				cnt ++;
			} else if (s[end - k] == '*') {
				end = end - k;
				cnt ++;
			} else {
				int flg = 0;
				for (int i = st + k - 1; i > st; -- i) {
					if (s[i] == '*') {
						st = i;
						flg = 1;
						cnt ++;
						break;
					}
				}
				if (flg == 1) continue;
				for (int i = end - k + 1; i < end; ++ i) {
					if (s[i] == '*') {
						end = i;
						cnt ++;
					}
				}
			}
		}
		cout << cnt << endl;
	}
	return 0;
}