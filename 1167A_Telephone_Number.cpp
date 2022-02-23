#include <bits\stdc++.h>
#define LL long long
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n;;
	cin >> t;
	while(t --) {
		cin >> n;
		string s;
		cin >> s;
		if(n < 11) cout << "NO" << endl;
		else if(n == 11 && s[0] != '8') cout << "NO" << endl;
		else {
			bool flg = true;
			for(int i = 0; i < n; i ++)
				if(s[i] == '8' && i <= n - 11) {
					cout << "YES" << endl;
					flg = !flg;
					break;
				}
			if(flg) cout << "NO" << endl;
		}
	}
	return 0;
}
