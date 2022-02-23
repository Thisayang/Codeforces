#include <bits\stdc++.h>
#define LL long long
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n, k;
	cin >> t;
	string s = "abc";
	while(t --) {
		cin >> n >> k;
		for(int i = 1; i <= n; i ++) {
			if(i % 3 == 1) cout << 'a';
			else if(i % 3 == 2) cout << 'b';
			else cout << 'c';
		}
		cout << endl;
	}
	return 0;
}
