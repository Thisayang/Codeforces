#include <bits\stdc++.h>
using namespace std;
int main() {
	string s;
	cin >> s;
	int ok = 0;
	if(s.length() < 7) cout << "NO" << endl;
	else {
		for(int i = 0; i + 6 < s.length(); i ++) {
			int cnt = 0;
			for(int j = 1; j < 7; j ++) {
				if(s[i] == s[i + j]) cnt ++;
			}
			if(cnt == 6) {
				cout << "YES" << endl;
				ok = 1;
				break;
			}
		}
		if(ok == 0) cout << "NO" << endl;
	}
	return 0;
}
