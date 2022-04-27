#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	string s, t;
	cin >> s >> t;
	for (int i = 0; s[i] != 0; ++ i) {
		if (i == 0) cout << s[i];
		else {
			if (s[i] < t[0] ) cout << s[i];
			else {
				cout << t[0] << endl;
				break;
			}		
		}
		if (s[i + 1] == 0) {
			cout << t[0] << endl;
		}
	}
	return 0;
}