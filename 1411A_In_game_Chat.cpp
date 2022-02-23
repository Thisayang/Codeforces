#include <bits\stdc++.h>
#define LL long long
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n;
	string s;
	cin >> t;
	while(t --) {
		cin >> n >> s;
		int cnt = 0;
		for(int i = n - 1; i >= 0; -- i)
			if(s[i] == ')') cnt ++;
			else break;
		if(cnt > n - cnt) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	return 0;
}
