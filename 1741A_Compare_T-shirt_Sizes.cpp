#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, a, n) for (int i = a; i < int(n); ++ i)
#define ROF(i, a, n) for (int i = a; i > int(n); -- i)
const long long mod = 1e9 + 7;
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t;
	string a;
	string b;
	cin >> t;
	while (t--) {
		cin >> a >> b;
		int len1 = a.length() - 1;
		int len2 = b.length() - 1;
		if (a == b) {
			cout << '=' << endl;
		} else if (a[len1] == 'L' && b[len2] == 'S') {
			cout << '>' << endl;
		} else if (a[len1] == 'S' && b[len2] == 'L') {
			cout << '<' << endl;
		} else if (a[len1] == 'L' && b[len2] == 'M') {
			cout << '>' << endl;
		} else if (a[len1] == 'M' && b[len2] == 'L') {
			cout << '<' << endl;
		} else if (a[len1] == 'S' && b[len2] == 'M') {
			cout << '<' << endl;
		} else if (a[len1] == 'M' && b[len2] == 'S') {
			cout << '>' << endl;
		} else if (a[len1] == 'L') {
			if (len1 > len2) {
				cout << '>' << endl;
			} else {
				cout << '<' << endl;
			}
		} else if (a[len1] == 'S') {
			if (len1 > len2) {
				cout << '<' << endl;
			} else {
				cout << '>' << endl;
			}
		}
	}
	return 0;
}