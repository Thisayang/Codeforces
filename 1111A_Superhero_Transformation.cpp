#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	string s, t;
	cin >> s >> t;
	int len1 = s.length(), len2 = t.length();
	set<char> sett;
	sett.insert('a');
	sett.insert('o');
	sett.insert('i');
	sett.insert('e');
	sett.insert('u');
	int flg = 1;
	if (len1 != len2) {
		cout << "No" << endl;
	} else {
		for (int i = 0; i < len1; ++ i) {
			if (sett.find(s[i]) == sett.end() && sett.find(t[i]) != sett.end()) {
				flg = 0;
				break;
			} else if (sett.find(s[i]) != sett.end() && sett.find(t[i]) == sett.end()) {
				flg = 0;
				break;
			}
		}
		cout << (flg ? "Yes" : "No") << endl;
	}
	return 0;
}