#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, a, n) for (int i = a; i < int(n); ++ i)
#define ROF(i, a, n) for (int i = a; i > int(n); -- i)
const long long mod = 1e9 + 7;
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n;
	string s;
	cin >> n;
	cin.ignore();
	FOR(i, 0, n) {
		getline(cin, s);
		int l = s.length();
		if (l < 5) cout << "OMG>.< I don't know!" << endl;
		else {
			string t = s.substr(0, 5);
			string v = s.substr(l - 5);
			if (t == "miao." && v == "lala.") cout << "OMG>.< I don't know!" << endl;
			else if (t == "miao.") cout << "Rainbow's" << endl;
			else if (v == "lala.") cout << "Freda's" << endl;
			else cout << "OMG>.< I don't know!" << endl;
		}
	}
	return 0;
}