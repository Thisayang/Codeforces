#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, flg = 0;
	string s;
	vector<int> a(100010);
	set<int> sett;
	cin >> n >> s;
	for (int i = 0; i < n; ++ i) {
		cin >> a[i];
	}
	sett.insert(0);
	for (int i = 0; i < n; ) {
		if (s[i] == '>') i = i + a[i];
		else i = i - a[i];
		if (i < 0 || i > n) {
			break;
		} else {
			if (sett.find(i) != sett.end()) {
				flg = 1;
				break;
			} else sett.insert(i);
		}
	}
	cout << (flg == 0 ? "FINITE" : "INFINITE") << endl;
	return 0;
}