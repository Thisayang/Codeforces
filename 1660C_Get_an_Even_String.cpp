#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t;
	string s;
	cin >> t;
	while (t --) {
		cin >> s;
		int len = s.length(), cnt = 0;
		vector <int> a(26, -1);
		for (int i = 0, flg = 0; i < len; ++ i) {
			if (a[s[i] - 'a'] == -1) {
				a[s[i] - 'a'] = flg;
			} else {
				cnt += 2;
				for (int j = 0; j < 26; ++ j) a[j] = -1;
			}
		}
		cout << len - cnt << endl;
	}
	return 0;
}