#include <bits/stdc++.h>
using namespace std;
int maxdiv(int n, int m) {
    int mx =0;
    for (int i =1 ; i <=n ; i++) {
        if (n % i ==0 && m % i ==0 ) {
            if (i > mx)mx =i;
        }

    }
    return mx;
}



int main() {
    int num1, num2; cin>>num1>>num2;
    cout<<maxdiv(num1, num2)<<endl;












}
