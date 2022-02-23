#include <bits\stdc++.h>
#define ll long long
#define ld long double
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	string s, t;
	while(cin >> s) {
		map<string, int> mp;
		map<string, int>::iterator it;
		for(int i = 0; i < 10; ++ i) {
			cin >> t;
			mp.insert(pair<string, int>(t, i));
		}
		int i = 0;
		while(i < 80) {
			string x = s.substr(i, 10);
			it = mp.find(x);
			cout << (*it).second;
			i += 10;
		}
		cout << endl;
	}
	return 0;
}
