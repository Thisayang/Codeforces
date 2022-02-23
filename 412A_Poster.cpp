#include <bits\stdc++.h>
#define ll long long
#define ld long double
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, k;
	string s;
	while(cin >> n >> k >> s) {
		if(k > n - k) {
			while(k < n) {
				cout << "RIGHT" << endl;
				k ++;
			}
			while(k > 0) {
				cout << "PRINT" << ' ' << s[-- k] << endl;
				if(k != 0) cout << "LEFT" << endl;
			}
		} else {
			while(k > 0) {
				if(k > 1) cout << "LEFT" << endl;
				k --;
			}
			while(k < n) {
				cout << "PRINT" << ' ' << s[k ++] << endl;
				if(k != n) cout << "RIGHT" << endl;
			}
		}
	}
	return 0;
}
