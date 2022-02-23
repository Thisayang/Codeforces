#include <bits\stdc++.h>
#define ll long long
#define ld long double
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n, a[2010];
    cin >> t;
    while(t --) {
        cin >> n;
        queue<int> odd, even;
        for(int i = 0; i < n; ++ i) cin >> a[i]; 
        for(int i = 0; i < n; ++ i)
            if(a[i] % 2 == 0) cout << a[i] << ' ';
        for(int i = 0; i < n; ++ i)
            if(a[i] % 2 == 1) cout << a[i] << ' ';
        cout << endl;
    }
	return 0;
}
