#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t;
	cin >> t;
	while (t --) {
		string s;
		cin >> s;
		int cnt = 0;
		for (int i = 0; s[i] != 0; ++ i) {
			if (s[i] == 'N') cnt ++;
		}
		cout << (cnt == 1 ? "NO" : "YES") << endl;
	}
	return 0;
}