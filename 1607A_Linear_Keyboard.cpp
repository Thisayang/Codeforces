#include <bits\stdc++.h>
#define ll long long
#define ld long double
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t;
	cin >> t;
	while (t --) {
		string s, r;
		int a[26] = {0};
		cin >> s;
		for (int i = 0; i < 26; ++ i) {
			a[s[i] - 'a'] = i;
		}
		cin >> r;
		int sum = 0;
		for(int i = 1; r[i] != 0; ++ i) {
			sum += abs(a[r[i] - 'a'] - a[r[i - 1] - 'a']);
		}
		cout << sum << endl;
	}
	return 0;
}
