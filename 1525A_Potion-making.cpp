#include <bits\stdc++.h>
#define ll long long
#define ld long double
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, k;
    cin >> t;
    while(t --) {
        cin >> k;
        if(100 % k == 0) cout << 100 / k << endl;
        else if(k % 25 == 0) cout << 4 << endl;
        else if(k % 20 == 0) cout << 5 << endl;
        else if(k % 10 == 0) cout << 10 << endl;
        else if(k % 5 == 0) cout << 20 << endl;
        else if(k % 4 == 0) cout << 25 << endl;
        else if(k % 2 == 0) cout << 50 << endl;
        else cout << 100 << endl;
    }
	return 0;
}
