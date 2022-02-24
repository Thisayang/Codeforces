#include <bits\stdc++.h>
#define ll long long
#define ld long double
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t;
	cin >> t;
	string n = "abcdefghijklmnopqrstuvwxyz";
	while (t --) {
		string s;
		int a[26] = {0}, cnt = 0;
		cin >> s;
		for (int i = 0; s[i] != 0; ++ i) {
			a[s[i] - 'a'] ++;
			if (a[s[i] - 'a'] == 2) cnt ++;
		}
		for (int i = 0; i < 26; ++ i) {
			if (a[i] == 2) {
				cout << n[i];
			}
		}
		for (int i = 0; i < 26; ++ i) {
			if (a[i] == 2) {
				cout << n[i];
				a[i] = 0;
			}
		}
		for (int i = 0; i < 26; ++ i) {
			if (a[i] != 0) {
				cout << n[i];
			}
		}
		cout << endl; 
	}
	return 0;
}
