#include <bits/stdc++.h>
using namespace std;



int main() {
    int t, first , sec; cin>>t;
    while (t--) {
        int total =0;
        cin>>first>>sec;
        int minn = min(first, sec), maxx = max(first, sec);
        for(int i = minn +1; i < maxx; i++) {
            if (i % 2 == 1) {total+=i;}

        }
        cout<<total<<endl;

    }








}
