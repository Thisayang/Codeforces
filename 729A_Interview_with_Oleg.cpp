#include <bits\stdc++.h>
#define ll long long
#define ld long double
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n;
	string s;
	while(cin >> n >> s) {
		for(int i = 0; i < n;) {
			if(s[i] == 'o') {
				if(s[i + 1] == 'g' && s[i + 2] == 'o') {
					++ i;
					while(s[i] == 'g' && s[i + 1] == 'o') i += 2;
					cout << "***";
				}
				else cout << s[i], ++ i;
			}
			else cout << s[i], ++ i;
		}
		cout << endl;
	}
	return 0;
}
