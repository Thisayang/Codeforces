#include <bits\stdc++.h>
using namespace std;
int main() {
	string s ="qwertyuiopasdfghjkl;zxcvbnm,./";
	char a;
	int ok;
	cin >> a;
	if(a == 'R') ok = -1;
	else ok = 1;
	string str;
	cin >> str;
	int len = str.length();
	for(int i = 0; i < len; i ++) {
		for(int j = 0; s[j] != 0; j ++) {
			if(str[i] == s[j]){
				cout << s[j + ok];
				break;
			}
		}
	}
	return 0;
}
