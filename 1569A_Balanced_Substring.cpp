#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n;
	string s;
	cin >> t;
	while (t --) {
		cin >> n >> s;
		int l = -1, r = -1;
		for (int i = 1; s[i] != 0; ++ i) {
			if ((s[i] == 'a' && s[i - 1] == 'b') || (s[i] == 'b' && s[i - 1] == 'a')) {
				l = i;
				r = i + 1;
				break;
			}
		}
		cout << l << " " << r << endl;
	}
	return 0;
}