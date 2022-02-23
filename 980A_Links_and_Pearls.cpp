#include <bits\stdc++.h>
#define ll long long
#define ld long double
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	string s;
	while(cin >> s) {
		int n1 = 0, n2 = 0;
		for(auto &i : s) 
		{
			if(i == '-') n1 ++;
			else n2 ++;
		}
		if(n2 == 0 || n1 % n2 == 0) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	return 0;
}
