#include <bits\stdc++.h>
#define ll long long
#define ld long double
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n;
	cin >> t;
	while (t --) {
		cin >> n;
		string s;
		cin >> s;
		for(int i = 0; s[i] != 0; ++ i) {
			if(s[i] == 'U') cout << 'D';
			else if(s[i] == 'D') cout << 'U';
			else cout << s[i];
		}
		cout << endl;
	}
	return 0;
}
