#include <bits/stdc++.h>
using namespace std;
int ReverseNumber(int number) {
    int reversed =0;
    while (number != 0) {

        reversed = reversed * 10 + number % 10;
        number /=10;
        /*
         * 1234 % 10 = 4
         * rev = (10*0)+ 4 => number = 123
         * rev = (4*10) + 3 => number = 12
         * rev (43*10) + 2 => number = 1
         * rev (432*10) +1 => number =0 (exit loop)
         * rev = 4321
         */
    }
    return reversed;

}


int main() {
    int n;cin>>n;
    cout<<"the reversed number is: "<<ReverseNumber(n);



}
