#include <bits\stdc++.h>
#define ll long long
#define ld long double
using namespace std;
int a[300010], loc[300010];
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	string s;
	while(cin >> s) {
		s += 'a';
		int l = s.length() - 1, num = 0;
		for(int i = 0, t = 0; i < l; ++ i) {
			a[i] = ++ t;
			if(s[i] != s[i + 1]) {
				t = 0;
				loc[++ num] = i;
			}
		}
		int ans = a[loc[num / 2 + 1]] + 1;
		if(!num % 2) ans = 0; 
		else {
			for(int i = 1; i <= num / 2 + 1; ++ i) {
				if(s[loc[i]] != s[loc[num + 1 - i]] || a[loc[i]] + a[loc[num + 1 - i]] < 3) {
					ans = 0;
					break;
				}
			}
		}
		cout << ans << endl;
	}
	return 0;
}
