#include <bits\stdc++.h>
#define LL long long
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n;
	string s1, s2;
	cin >> t;
	while(t --) {
		int cnt1 = 0, cnt2 = 0;
		cin >> n >> s1 >> s2;
		for(int i = 0; i < n; i ++) {
			if(s1[i] > s2[i]) cnt1 ++;
			else if(s1[i] < s2[i]) cnt2 ++;
		}
		if(cnt1 > cnt2) cout << "RED" << endl;
		else if(cnt1 < cnt2) cout << "BLUE" << endl;
		else cout << "EQUAL" << endl;
	}
	return 0;
}
