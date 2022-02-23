#include <bits\stdc++.h>
using namespace std;
int main() {
	string s;
	cin >> s;
	char max = s[1];
	if(s[0] != '-') cout << s;
	else if(s.length() == 3 && s[2] == '0') cout << '0';
	else {
		int flg = s[s.length() - 1] > s[s.length() - 2] ? s.length() - 1 : s.length() - 2;
		for(int i = 0; s[i] != 0; i ++) 
			if(i != flg) cout << s[i];
	}
	return 0;
}
