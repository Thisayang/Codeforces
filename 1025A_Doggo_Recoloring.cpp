#include <bits\stdc++.h>
#define LL long long
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n;
	string s;
	while(cin >> n >> s) {
		int a[26] = {0};
		bool flg = 0;
		for(auto &i : s) {
			a[i - 'a'] ++;
			if(a[i - 'a'] > 1) {
				flg = 1;
				break;
			}
		}
		if(flg || s.length() == 1) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	return 0;
}
