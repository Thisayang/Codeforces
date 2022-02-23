#include <bits\stdc++.h>
#define LL long long
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int k, num0 = 0, num1;
	string s;
	cin >> k >> s;
	for(auto i : s)
		if(i == '0') num0 ++;
	num1 = k - num0;
	if(num0 != num1) cout << 1 <<endl << s;
	else {
		cout << 2 << endl << s[0] << ' ';
		for(int i = 1; i < k; i ++) cout << s[i];
	}
	return 0;
}
