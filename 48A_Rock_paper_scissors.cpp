#include <bits\stdc++.h>
#define ll long long
#define ld long double
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	string s[3];
	int a[3] = {0};
	for(int i = 0; i < 3; ++ i) {
		cin >> s[i];
		if(s[i] == "paper") a[0] ++;
		else if(s[i] == "rock") a[1] ++;
		else a[2] ++;
	}
	if(a[0] == a[1] && a[0] == a[2]) cout << "?" << endl;
	else if(a[0] == 3 || a[1] == 3 || a[2] == 3) cout << "?" << endl;
	else if((a[1] == 1 && a[0] == 2) || (a[0] == 1 && a[2] == 2) || (a[2] == 1 && a[1] == 2)) cout << "?" << endl;
	else if(a[1] == 1 && a[2] == 2) {
		if(s[0] == "rock") cout << "F" << endl;
		else if(s[1] == "rock") cout << "M" << endl;
		else cout << "S" << endl;
	}
	else if(a[2] == 1 && a[0] == 2) {
		if(s[0] == "scissors") cout << "F" << endl;
		else if(s[1] == "scissors") cout << "M" << endl;
		else cout << "S" << endl;
	}
	else if(a[0] == 1 && a[1] == 2) {
		if(s[0] == "paper") cout << "F" << endl;
		else if(s[1] == "paper") cout << "M" << endl;
		else cout << "S" << endl;
	}
	return 0;
}