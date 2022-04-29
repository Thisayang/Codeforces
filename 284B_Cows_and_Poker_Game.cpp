#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, cnt = 0, cnt2 = 0, cnt3 = 0;
	string s;
	cin >> n >> s;
	for (int i = 0; i < n; ++ i) {
		if (s[i] == 'A') cnt ++; 
		else if (s[i] == 'I') cnt2 ++;
		else cnt3 ++;
	}
	if (cnt2 == 0 && cnt != 0) cout << cnt << endl;
	else if (cnt2 == 1) cout << 1 << endl;
	else cout << 0 << endl;
	return 0;
}