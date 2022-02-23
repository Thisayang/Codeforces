#include <bits\stdc++.h>
#define LL long long
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, k;
	string s;
	while(cin >> n >> k) {
		cin >> s;
		int ch[26] = {0};
		for(auto &i : s) ch[i - 'a'] ++;
		sort(ch, ch + 26);
		if(ch[25] <= k) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	return 0;
}
