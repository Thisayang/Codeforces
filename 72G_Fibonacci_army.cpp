#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n;
	cin >> n;
	int a = 1, b = 1;
	for (int i = 2; i <= n; ++ i) {
		int tmp = a;
		a = a + b;
		b = tmp;
	}
	cout << a << endl;
	return 0;
}

/*
a:=0
b:=1
for (i,1,File standardInput readLine asNumber,b=a+b
a=b-a)
b println
*/