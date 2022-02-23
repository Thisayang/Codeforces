#include <bits\stdc++.h>
#define ll long long
#define ld long double
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n;
	string s;
	while(cin >> n >> s) {
		int tmp = 1, ans = 0;
		for(auto &i : s) {
			if(i == '1' && tmp == 1) i = '0', tmp = 1, ans ++;
			else if(i == '0' && tmp == 1) i = '1', tmp = 0, ans ++;
		}
		cout << ans << endl;
	}
	return 0;
}
