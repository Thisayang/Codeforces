#include <bits\stdc++.h>
#define LL long long
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, sum = 0;
	string s;
	bool ans = true;
	cin >> n >> s;
	for(int i = 0; i != n; ++ i) {
		if(s[i] != '4' && s[i] != '7') {
			ans = false;
			break;
		}
		if(i < n / 2) sum += s[i];
		else sum -= s[i];
	}
	if(sum != 0) ans = false;
	if(ans) cout << "YES";
	else cout << "NO";
	return 0;
}
