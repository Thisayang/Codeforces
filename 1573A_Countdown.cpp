#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n;
	cin >> t;
	while (t --) {
		cin >> n;
		string s;
		cin >> s;
		int cnt = 0;
		for (int i = 0; i < n - 1; ++ i) {
			if (s[i] > '0') cnt += s[i] - '0' + 1;
		}
		cout << cnt + s[n - 1] - '0' << endl;
	}
	return 0;
}