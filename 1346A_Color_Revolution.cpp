#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n, k;
	cin >> t;
	while (t --) {
		cin >> n >> k;
		int ans = 1 + k + k * k + k * k * k;
		cout << n / ans << " " << n / ans * k << " " << n / ans * k * k << " " << n / ans * k * k * k << endl;
	}
	return 0;
}
/*
fun main() = repeat(readLine()!!.toInt()) {
    val (n, k) = readLine()!!.split(" ").map { it.toInt() }
    val n1 = n/(1+k+k*k+k*k*k)
    println("$n1 ${n1*k} ${n1*k*k} ${n1*k*k*k}")
}

*/
