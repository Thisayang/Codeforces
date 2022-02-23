#include <bits\stdc++.h>
#define ll long long
#define ld long double
using namespace std;
int nsqrt(int n) {
    int x = sqrt(n);
    return x * x == n;
}
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n;
    cin >> t;
    while(t --) {
        cin >> n;
        if(n % 2 == 0) {
            if(nsqrt(n / 2)) cout << "YES" << endl;
            else if(n % 4 == 0 && nsqrt(n / 4)) cout << "YES" << endl;
            else cout << "NO" << endl;
        } else cout << "NO" << endl;
    }
	return 0;
}
