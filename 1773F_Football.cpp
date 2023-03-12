#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, a, n) for (int i = a; i < int(n); ++ i)
#define ROF(i, a, n) for (int i = a; i > int(n); -- i)
const long long mod = 1e9 + 7;
using namespace std;

void DoA(int a, int n)
{
    cout << n - a << "\n";
    for (int i = 0; i < n; ++i) {
        if (i < a) {
            cout << "1:0" << endl;
        } else {
            cout << "0:0" << endl;
        }
    }
    return;
}

void DoB(int b, int n)
{
    cout << n - b << "\n";
    for (int i = 0; i < n; ++i) {
        if (i < b) {
            cout << "0:1" << endl;
        } else {
            cout << "0:0" << endl;
        }
    }
    return;
}
 
void Do0(int a, int b)
{
    cout << (a == b) << endl;
    cout << a << ":" << b << endl;
}
 
void Solve(int n, int a, int b)
{
    if (n == 1 && a == b) {
        Do0(a, b);        
    } else if (a == 0 && b < n) {
        DoB(b, n);
    } else if (b == 0 && a < n) {
        DoA(a, n);
    } else if (a == 0) {
        cout << "0\n";
        for (int i = 0; i < n - 1; ++i) {
            cout << "0:1" << endl;
        }
        cout << "0:" << b - n + 1 << endl;
    } else if (b == 0) {
        cout << "0\n";
        for (int i = 0; i < n - 1; ++i) {
            cout << "1:0" << endl;
        }
        cout << a - n + 1 << ":0" << endl;
    } else if (a + b < n) {
        cout << n - a - b << endl;
        for (int i = 0; i < n; ++ i) {
            if (a > 0) {
                cout << "1:0" << endl;
                a--;
            } else if (b > 0) {
                cout << "0:1" << endl;
                b--;
            } else {
                cout << "0:0" << endl;
            }
        }
    } else{
        cout << "0" << endl;
        int i = 0;
        if (n + b - 1 == a) {
            cout << "2:0" << endl;
            a -= 2;
            i++;
        }
        for (i; i < n - 1; ++ i) {
            if (a > 0) {
                cout << "1:0" << endl;
                a--;
            } else {
                cout << "0:1" << endl;
                b--;
            }
        }
        cout << a << ":" << b << endl;
    }
}

int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n;
    int a;
    int b;
    cin >> n >> a >> b;
    Solve(n, a, b);
	return 0;
}