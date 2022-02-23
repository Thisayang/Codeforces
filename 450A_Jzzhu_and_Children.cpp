#include <bits\stdc++.h>
#define ll long long
#define ld long double
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int n, m, a[110] = {0};
    cin >> n >> m;
    int tmp = n;
    for(int i = 0; i < n; ++ i) cin >> a[i];
    while(tmp) {
        for(int i = 0; i < n; ++ i) {
            //cout << i << ' ' << a[i] << endl;
            if(a[i] == 0) continue;
            if(m >= a[i]) {
                a[i] = 0;
                tmp --;
                if(tmp == 0) {
                    cout << i + 1 << endl;
                    return 0;
                }
            } else a[i] -= m;
        }
    }
	return 0;
}

/*
#include <bits\stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int n, m, a[110] = {0};
    cin >> n >> m;
    for(int i = 0; i < n; ++ i) cin >> a[i];
    int tmp = n;
    while(tmp) {
       for(int i = 0; i < n; ++ i) {
            if(a[i] == 0) continue;
            if(m >= a[i]) {
                a[i] = 0; 
                tmp --;
            } else a[i] -= m;
            if(tmp == 0) {
                cout << i + 1 << endl;
                break;
            }
       }
    }
    return 0;
}
*/
/*
#include <bits\stdc++.h>
using namespace std;
typedef struct child{
    int num, candy;
};
int main() {
    queue<child> q;
    child ch;
    int n, m, tmp;
    cin >> n >> m;
    for(int i = 0; i < n; ++ i) {
        cin >> tmp;
        ch.num = i + 1;
        ch.candy = tmp;
        q.push(ch);
    }
    while(q.size() > 1) {
        if(q.front() <= m) q.pop();
        else {
            q.front().candy -= m;
            q.push(q.front());
            q.pop();
        }
    }
    cout << q.front().num << endl;
    return 0;
}
typedef int elemtype;
 children ch;
num a, b;
queue<template T> q;
泛式编程
-> back -> front ->
*/