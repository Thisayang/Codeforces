#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int a[110] = {1, 1};
void solve(string s, int k) {
	for (int i = 0; i < k; ++ i) {
		if (s[i] == '1' || s[i] == '4' || s[i] == '6' || s[i] == '8' || s[i] == '9') {
			cout << 1 << endl << s[i] << endl;
			return ;
		}
	}
	for (int i = 0; i < k; ++ i) {
		for (int j = i + 1; j < k; ++ j) {
			if (a[(s[i] - '0') * 10 + (s[j] - '0')] == 1) {
				cout << 2 << endl << s[i] << s[j] << endl;
				return;
			}
		}
	}
}
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, k;
	string s;
	for (int i = 2; i < 11; ++ i) {
		for (int j = 2; i * j < 110; ++ j) {
			a[i * j] = 1;
		}
	}
	cin >> t;
	while (t --) {
		cin >> k >> s;
		solve(s, k);
	}
	return 0;
}