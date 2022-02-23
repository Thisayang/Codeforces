#include <bits\stdc++.h>
#define LL long long
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, k, t, g;
	string s;
	bool flg = true;
	cin >> n >> k >> s;
	for(int i = 0; i != n; ++ i) {
		if(s[i] == 'G') g = i;
		if(s[i] == 'T')	t = i;
	}
	int i = g;
	if(g < t) {
		for(i = g + k; i < t; i += k)
			if(s[i] == '#') {
				flg = false;
				break;
			}
		if(i != t) flg = false;
	} else {
		for(i = g - k; i > t; i -= k)
			if(s[i] == '#') {
				flg = false;
				break;
			}
		if(i != t) flg = false;
	}
	if(flg == true) cout << "YES" << endl;
	else cout << "NO" << endl;
	return 0;
}
