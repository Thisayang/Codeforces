#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, ans = 0;
	string s;
	cin >> n >> s;
	set<char> sett;
	for (int i = 0; i < n; ++ i) {
		if (s[i] >= 'A' && s[i] <= 'Z') {
			ans = max(int(sett.size()), ans);
			sett.clear();
		} else {
			sett.insert(s[i]);
		}
	}
	cout << max(int(sett.size()), ans) << endl;
	return 0;
}