#include <bits\stdc++.h>
using namespace std;
int main() {
	int t;
	string s[3];
	cin >> t;
	while(t --) {
		int ok = 0;
		cin >> s[0] >> s[1] >> s[2];
		for(int i = 0; s[2][i] != 0; i ++) {
			if(s[0][i] == s[2][i]) s[1][i] = s[2][i]; 
			else if(s[1][i] == s[2][i]) s[0][i] = s[2][i];
			else{
				ok = 1;
				break;
			}
		}
		if(ok == 0) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	return 0;
}
