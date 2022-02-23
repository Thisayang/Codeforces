#include <bits\stdc++.h>
#define ll long long
#define ld long double
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t;
	cin >> t;
	while (t --) {
		string s;
		cin >> s;
		int kr = 0, kg = 0, kb = 0, flg = 0;
		for (int i = 0; i < 6; ++ i) {
			if (s[i] == 'r') kr = 1;
			else if (s[i] == 'g') kg = 1;
			else if (s[i] == 'b') kb = 1;
			else if (s[i] == 'R') {
				if (kr == 0) {
					flg = 1;
				}
			}
			else if (s[i] == 'G') {
				if (kg == 0) {
					flg = 1;
				}
			} 
			else if (s[i] == 'B') {
				if (kb == 0) {
					flg = 1;
				}
			}
		}
		if (flg) cout << "NO" << endl;
		else cout << "YES" << endl;
	}
	return 0;
}
