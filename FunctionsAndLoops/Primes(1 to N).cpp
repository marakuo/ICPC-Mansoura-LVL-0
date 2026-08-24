#include <bits/stdc++.h>
using namespace std;
bool isPrime(int n) {
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }return true;
}



int main() {
    int number;cin>>number;
    for (int i = 2; i <= number; i++) {
        bool right = isPrime(i);
        if (right) {cout<<i<<" ";}



    }









}
