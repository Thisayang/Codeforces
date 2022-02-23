#include <bits\stdc++.h>
#define LL long long
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	string s;
	cin >> s;
	int l = s.length();
	bool flgd = 0, flgl = 0, flgs = 0;
	for(int i = 0; i < l; ++ i) {
		if(s[i] >= '0' && s[i] <= '9') flgd = 1;
		else if(s[i] >= 'A' && s[i] <= 'Z') flgl = 1;
		else if(s[i] >= 'a' && s[i] <= 'z') flgs = 1;
	}
	if(l >= 5 && flgd && flgl && flgs) cout << "Correct";
	else cout << "Too weak";
	return 0;
}
