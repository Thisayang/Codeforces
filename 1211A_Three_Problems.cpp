#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, a;
	map<int, int> mp;
	cin >> n;
	for (int i = 0; i < n; ++ i) {
		cin >> a;
		mp[a] = i + 1;
	}
	if (int(mp.size()) < 3) cout << "-1 -1 -1" << endl;
	else {
		auto it = mp.begin();
		for(int i = 0; i < 3; ++ it, ++ i) {
			cout << it -> second << " ";
		}
		cout << endl;
	}
	return 0;
}
/*
fun main() {
    val n = readLine()!!.toInt()
    val r = readLine()!!.split(" ").map { it.toInt() }
        .withIndex()
        .distinctBy { it.value }
        .sortedBy { it.value }
        .map { it.index + 1 }
    if (r.size < 3) {
        println("-1 -1 -1")
    } else {
        println("${r[0]} ${r[1]} ${r[2]}")
    }
}
*/