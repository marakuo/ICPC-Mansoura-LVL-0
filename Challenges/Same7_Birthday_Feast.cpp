#include <bits/stdc++.h>
using namespace std;
 
 
 
int main() {
   int t ; cin >>t;
    while (t--) {
        string check; cin >>check;
        for(int i = 0 ; i < check.length(); i++) {
           check[i]= toupper(check[i]);
        }
        if(check == "YES") {
            cout << "YES" << endl;
        }else cout << "NO" << endl;
 
 
    }
 
    return 0;
}
