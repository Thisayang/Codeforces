#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, m;
	string s[110];
	set<string> dict;
	cin >> n >> m;
	for (int i = 0; i < n; ++ i) {
		cin >> s[i];
		dict.insert(s[i]);
	}
	string left = "", right = "";
	string mid;
	for (int i = 0; i < n; ++ i) {
		string t = s[i];
		reverse(t.begin(), t.end());
		if (t == s[i]) {
			mid = t;
		} else if (dict.find(t) != dict.end()) {
			left += s[i];
			right = t + right;
			dict.erase(s[i]);
			dict.erase(t);
		}
	}
	string x = left + mid + right;
	cout << x.length() << endl;
	cout << x << endl;
	return 0;
}