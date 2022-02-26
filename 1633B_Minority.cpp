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
		int a[2] = {0}, len = s.length();
		for (int i = 0; i < len; ++ i) {
			a[s[i] - '0'] ++;
		}
		if (len < 3) {
			cout << 0 << endl;
		} else {
			if (abs(a[0] - a[1]) >= 1) {
				cout << (a[0] > a[1] ? a[1] : a[0]) << endl;
			} else {
				cout << a[0] - 1 << endl;
			} 
		}
		 
	}
	return 0;
}