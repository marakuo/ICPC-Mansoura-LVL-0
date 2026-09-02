#include <bits/stdc++.h>
using namespace std;


int main() {
    int n; cin>>n;
    if (n ==1)cout<<0<<" ";else if (n ==2)cout<<0<<" "<<1<<" ";

    else {
        int base =0, next =1;
        cout<<0<<" "<<1<<" ";
        for (int i =3; i <=n; i++) {
            int fib = base + next;
            base = next;
            next =fib;
            cout<<fib<<" ";
        }
    }






}
