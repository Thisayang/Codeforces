#include <bits\stdc++.h>
#define ll long long
#define ld long double
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, r, b, d;
    cin >> t;
    while(t --) {
        cin >> r >> b >> d;
        int Min = min(r, b);
        int Max = r + b - Min;
        if(((Max % Min + Min - 1) / Min + Max / Min) - 1 <= d)  puts("YES");
        else puts("NO");
    }
	return 0;
}
