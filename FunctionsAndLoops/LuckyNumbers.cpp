#include <bits/stdc++.h>
using namespace std;
bool isLucky(int n) {
    int num =0;
    while (n !=0) {
        // 744
        num = n % 10; // 4
        n /=10; // 74
        if (num != 4 && num != 7) return false;


    }return true;
}


int main() {
    int n, m;cin>>n>>m;
    bool flag = false;
    for (int i = n; i <= m; i++) {
        if (isLucky(i)) {
            flag = true;
            cout<<i<<" ";
        }

    }
    if (!flag) {cout<<-1<<endl;}













}
