#include <bits\stdc++.h>
#define LL long long
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t;
	cin >> t;
	while(t --) {
		string s;
		int a[25], l = s.length(), flg = 1;
		cin >> s;
		sort(s.begin(), s.end());
		for(auto i = 1; i < s.length(); i ++)
			if(s[i]- s[i - 1] != 1) flg = 0;
		if(flg) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	return 0;
}
