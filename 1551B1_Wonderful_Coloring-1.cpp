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
		int a[26] = {0}, sum = 0;
		for (int i = 0; s[i] != 0; ++ i) {
			a[s[i] - 'a'] ++;
		}
		for (int i = 0; i < 26; ++ i) {
			if (a[i] <= 2) sum += a[i];
			else sum += 2;
		}
		cout << sum / 2 << endl;
	}
	return 0;
}
