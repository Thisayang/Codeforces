#include <bits\stdc++.h>
using namespace std;
int main() {
	string s;
	cin >> s;
	int cnt = 0;
	for(int i = 0; s[i] != 0; i ++)
		if(s[i] >= 'A' && s[i] <= 'Z') cnt ++;
	if(cnt == s.length()) {
		for(int i = 0; s[i] != 0; i ++) s[i] += 32;
	} else if(cnt == s.length() - 1 && s[0] >= 'a' && s[0] <= 'z') {
		s[0] -= 32;
		for(int i = 1; s[i] != 0; i ++) s[i] += 32;
	}
	cout << s;
	return 0;
}
