#include <bits\stdc++.h>
#define ll long long
#define ld long double
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	string s;
	while(cin >> s) {
		int len = s.length();
		while(len > 0) {
			string t = s.substr(0, len);
			string tmp = t;
			reverse(t.begin(), t.end());
			if(t != tmp) break;
			else len --;
		}
		cout << len << endl;
	}
	return 0;
}
