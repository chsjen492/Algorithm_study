#include<bits/stdc++.h>
using namespace std;

int n;
int cnt = 0;
bool isused1[50];
bool isused2[50];
bool isused3[50];

void func(int now) {
    if (now == n) {
        cnt++;
        return;
    }
    for (int i = 0; i < n; i++) {
        if (isused1[i] || isused2[i + now] || isused3[now-i+ n - 1])
            continue;
        isused1[i] = 1;
        isused2[i + now] = 1;
        isused3[now-i + n - 1] = 1;
        func(now + 1);
        isused1[i] = 0;
        isused2[i + now] = 0;
        isused3[now-i + n - 1] = 0;
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    cin >> n;

    func(0);
    cout << cnt;
}