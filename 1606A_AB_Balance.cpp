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
		if (s[0] == s[s.length() - 1]) cout << s << endl;
		else {
			s[0] = s[s.length() - 1];
			cout << s << endl;
		}
	}
	return 0;
}