#include <bits\stdc++.h>
#define LL long long
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n;
	cin >> t;
	while(t --) {
		cin >> n;
		string s;
		cin >> s;
		if(n < 4) cout << "NO" << endl;
		else if(s[n - 4] == '2' && s[n - 3] == '0'
			&& s[n - 2] == '2' && s[n - 1] == '0')
				cout << "YES" << endl;
		else if(s[0] == '2' && s[n - 3] == '0'
			&& s[n - 2] == '2' && s[n - 1] == '0')
				cout << "YES" << endl;
		else if(s[0] == '2' && s[1] == '0'
			&& s[n - 2] == '2' && s[n - 1] == '0')
				cout << "YES" << endl;
		else if(s[0] == '2' && s[1] == '0'
			&& s[2] == '2' && s[n - 1] == '0')
				cout << "YES" << endl;
		else if(s[0] == '2' && s[1] == '0'
			&& s[2] == '2' && s[3] == '0')
				cout << "YES" << endl;
		else cout <<"NO" << endl;
	}
	return 0;
}
