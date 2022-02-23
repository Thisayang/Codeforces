#include <bits\stdc++.h>
#define ll long long
#define ld long double
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t;
	cin >> t;
	while(t --) {
		string s;
		cin >> s;
		int a = 0, b = 0, c = 0;
		for(int i = 0; s[i] != 0; ++ i) {
			if(s[i] == 'A') a ++;
			else if(s[i] == 'B') b ++;
			else c ++;
		}
		if(a + c == b) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	return 0;
}
