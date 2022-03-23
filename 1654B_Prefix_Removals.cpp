#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int  t;
	cin >> t;
	while (t --) {
		string s;
		cin >> s;
		vector<int> a(26);
		for (int i = 0; s[i] != 0; ++ i) {
			a[s[i] - 'a'] ++ ;
		}
		for (int i = 0; s[i] != 0; ++ i) {
			if (a[s[i] - 'a'] == 1) {
				for (int j = i; s[j] != 0; ++ j) {
					cout << s[j];
				}
				cout << endl;
				break;
			}
			a[s[i] - 'a'] --;
		}
	}
	return 0;
}