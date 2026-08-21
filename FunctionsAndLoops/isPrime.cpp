#include <bits/stdc++.h>
using namespace std;
int main() {
    int x;cin>>x;
    bool isPrime=true;
    for(int i=2;i*i<=x;i++) {
        if (x % i ==0) isPrime=false;
    }
    isPrime?cout<<"YES"<<endl:cout<<"NO"<<endl;


}
