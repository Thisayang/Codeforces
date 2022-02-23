#include <bits\stdc++.h>
#define LL long long
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	string n;
	string s[10] = {"O-|-OOOO", "O-|O-OOO", "O-|OO-OO", 
	"O-|OOO-O", "O-|OOOO-", "-O|-OOOO", "-O|O-OOO",
	"-O|OO-OO", "-O|OOO-O", "-O|OOOO-"};
	cin >> n;
	for(int i = n.length() - 1; i >= 0; -- i)
		cout << s[n[i] - '0'] << endl;
	return 0;
}
