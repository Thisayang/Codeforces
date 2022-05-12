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
		int sum1 = 0, sum2 = 0;
		for (int i = 0; i < 6; ++ i) {
			if (i < 3) sum1 += s[i];
			else sum2 += s[i];
		}
		if (sum1 == sum2) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	return 0;
}