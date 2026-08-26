#include <bits/stdc++.h>
using namespace std;



int main() {
    int n, m;
    while (cin>>n>>m && n>0 && m >0 ) {
        int minn= min(n,m), maxn= max(n,m), total =0;
        for (int i = minn; i <=maxn; i++) {
            cout<<i<<" ";
            total+=i;
        }
        cout<<"sum = "<<total<<endl;
    }








}
