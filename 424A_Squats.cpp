#include <bits\stdc++.h>
#define ll long long
#define ld long double
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n;
	string s;
	while(cin >> n >> s) {
		int st = 0, sit = 0;
		for(auto &i : s) {
			if(i == 'X') st ++;
			else sit ++;
		}
		if(st > n / 2) {
			int tmp = st - n / 2;
			cout << tmp << endl;
			for(int i = 0; tmp; ++ i) if(s[i] == 'X') s[i] = 'x', -- tmp;
		}
		else if(st < n / 2) {
			int tmp = sit - n / 2;
			cout << tmp << endl;
			for(int i = 0; tmp; ++ i) if(s[i] == 'x') s[i] = 'X', -- tmp;
		}
		else cout << 0 << endl;
		cout << s << endl;
	}
	return 0;
}
