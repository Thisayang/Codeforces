#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, ans = 0;
	string s;
	cin >> n >> s;
	for (int i = 0; i < n; ++ i) {
		if (s[i] == '<') ans ++;
		else break;
	}
	for (int j = n - 1; j >= 0; -- j) {
		if (s[j] == '>') ans ++;
		else break;
	}
	cout << ans << endl;
	return 0;
}