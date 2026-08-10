#include <bits/stdc++.h>
using namespace std;
int SumOfDigits(int number) {
    int sum =0;
    while (number != 0) {
      sum = sum +  (number % 10);
        number /= 10;

    }
    return sum;
}


int main() {
    int n;cin>>n;
    cout<<SumOfDigits(n);




}
