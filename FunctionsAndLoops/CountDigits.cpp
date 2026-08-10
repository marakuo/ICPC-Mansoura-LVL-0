#include <bits/stdc++.h>
using namespace std;
int CountDigits(int number) {
    int ctr =0;
    while (number != 0) {
        number /=10; ctr++;

    }
    return ctr;
}


int main() {
    int n; cin>>n;
    cout<<"number of digits is: " <<CountDigits(n)<<endl;


}
