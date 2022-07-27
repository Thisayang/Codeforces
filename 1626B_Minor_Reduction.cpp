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
		int len = s.length(), j = 0;
		for (int i = len - 1; i > 0; -- i) {
			if (s[i] - '0' + s[i - 1] - '0' >= 10) {
				j = i - 1;
				break;
			}
		}
		cout << s.substr(0, j) << (s[j] - '0') + (s[j + 1] - '0') << s.substr(j + 2) << endl; 
	}
	return 0;
}