#include <bits\stdc++.h>
#define LL long long
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	string s1, s2;
	while(cin >> s1 >> s2) {
		reverse(s1.begin(), s1.end());
		reverse(s2.begin(), s2.end());
		int mmin = min(s1.length(), s2.length()), ans = s1.length() + s2.length();
		for(int i = 0; i < mmin; ++ i) {
			if(s1[i] == s2[i]) ans -= 2;
			else break;
		}
		cout << ans << endl;
	}
	return 0;
}
