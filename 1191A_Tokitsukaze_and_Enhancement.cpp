#include <bits\stdc++.h>
#define LL long long
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int x;
	cin >> x;
	if(x % 4 == 1) cout << "0 A" << endl;
	else if(x % 4 == 2) cout << "1 B" << endl;
	else if(x % 4 == 3) cout << "2 A" << endl;
	else cout << "1 A" << endl;
	return 0;
}
