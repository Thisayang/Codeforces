#include <bits\stdc++.h>
#define ll long long
#define ld long double
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	string s;
	cin >> s;
	int cnt = 0, len = s.length();
	for (int st = 0, end = len - 1; st < end; ++ st, -- end) {
		if (s[st] != s[end]) cnt ++;
	}
	if (cnt > 1) cout << "NO" << endl;
	else if (len % 2 == 0 && cnt == 0) cout << "NO" << endl;
	else cout << "YES" << endl;
	return 0;
}
