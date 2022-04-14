#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n;
	string s, t;
	cin >> n;
	while (n --) {
		cin >> s >> t;
		int a[26] = {0};
		int len = s.length(), len2 = t.length();
		for (int i = 0; i < len2; ++ i) {
			a[t[i] - 'A'] ++;
		}
		string tmp = "";
		for (int i = len - 1; i >= 0; -- i) {
			if (a[s[i] - 'A'] > 0) {
				tmp = s[i] + tmp;
				a[s[i] - 'A'] --;
			}
		}
		cout << (tmp == t ? "YES" : "NO") << endl;
	}
	return 0;
}