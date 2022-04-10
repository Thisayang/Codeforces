#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n;
	string s;
	cin >> n >> s;
	if (n > 26) cout << "-1" << endl;
	else {
		set<char> sett;
		for (int i = 0; i < n; ++ i) {
			sett.insert(s[i]);
		}
		cout << n - sett.size() << endl;
	}
	return 0;
}