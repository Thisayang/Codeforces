#include <bits\stdc++.h>
#define ll long long
#define ld long double
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, m;
	string s, t, x[3010];
	while(cin >> n >> m) {
		map<string, string> mp;
		map<string, string>::iterator it;
		for(int i = 0; i < m; ++ i) {
			cin >> s >> t;
			mp.insert(pair<string, string>(s, t));
		}
		for(int i = 0; i < n; ++ i) {
			cin >> x[i];
			int l = x[i].length();
			it = mp.find(x[i]);
			if(mp[x[i]].length() < l) x[i] = mp[x[i]];
		}
		for(int i = 0; i < n; ++ i)
			cout << x[i] << ' ';
		cout << endl;
	}
	return 0;
}
