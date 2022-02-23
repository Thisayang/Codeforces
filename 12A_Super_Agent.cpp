#include <bits\stdc++.h>
#define LL long long
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	string s1, s2, s3, s;
	cin >> s1 >> s2 >> s3;
	s = s1 + s2 + s3;
	bool flg = true;
	for(int i = 0; i < 4; ++ i) {
		if(s[i] != s[8 - i]) flg = false;
	}
	if(flg) cout << "YES";
	else cout << "NO";
	return 0;
}
