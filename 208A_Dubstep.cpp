#include <bits\stdc++.h>
using namespace std;
int main() {
	string s;
	cin >> s;
	for(int i = 0; s[i + 2] != 0; i ++) {
		if(s[i] == 'W' && s[i + 1] == 'U' && s[i + 2] == 'B')
			s[i] = s[i + 1] = s[i + 2] = ' ';
	}
	for(int i = 0; s[i] != 0; i ++) {
		if(s[i] == ' ') continue;
		cout << s[i];
		if(s[i + 1] == ' ') cout << ' '; 
	}
	return 0;
}
