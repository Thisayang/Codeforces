#include <bits\stdc++.h>
#define LL long long
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	string s[8];
	int sum = 0;
	for(int i = 0; i < 8; ++ i) {
		cin >> s[i];
		for(int j = 0; j < 8; ++ j) {
			if(s[i][j] == 'Q') sum += 9;
			else if(s[i][j] == 'R') sum += 5;
			else if(s[i][j] == 'B') sum += 3;
			else if(s[i][j] == 'N') sum += 3;
			else if(s[i][j] == 'P') sum += 1;
			else if(s[i][j] == 'q') sum -= 9;
			else if(s[i][j] == 'r') sum -= 5;
			else if(s[i][j] == 'b') sum -= 3;
			else if(s[i][j] == 'n') sum -= 3;
			else if(s[i][j] == 'p') sum -= 1;
		}
	}
	if(sum > 0) cout << "White" << endl;
	else if(sum < 0) cout << "Black" << endl;
	else cout << "Draw" << endl;
	return 0;
}
