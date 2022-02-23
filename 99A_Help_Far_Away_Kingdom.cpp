#include <bits\stdc++.h>
#define LL long long
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	string s;
	int flg = 1;
	cin >> s;
	int l = s.length(), i;
	for(i = 0; i < l; ++ i) {
		if(s[i] == '.' && s[i - 1] == '9') {
			flg = 0;
			break;
		}
		else if(s[i] == '.' && s[i + 1] > '4' && s[i - 1] != '9') {
			s[i - 1] ++;
			break;
		}
		else if(s[i] == '.') break;
	}
	if(flg == 0) cout << "GOTO Vasilisa.";
	else {
		for(int j = 0; j < i; ++ j) cout << s[j];
	}
	return 0;
}
