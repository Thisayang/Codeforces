#include <bits\stdc++.h>
#define ll long long
#define ld long double
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	string s, t;
	int n;
	while(cin >> s >> n) {
		bool fg1 = 0, fg2 = 0;
		while(n --) {
			cin >> t;
			if(t == s) fg1 = 1, fg2 = 1;
			if(t[1] == s[0]) fg1 = 1;
			if(t[0] == s[1]) fg2 = 1;
		}
		if(fg1 && fg2)  cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	return 0;
}
