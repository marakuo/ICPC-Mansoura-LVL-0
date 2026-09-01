#include <bits/stdc++.h>
using namespace std;





int main() {
  long long n , bit, i =0 , sum =0;cin>>n;
  while (n !=0) {
    bit = n % 2;
    n/=2;
    sum+= (bit * pow(10, i));
    i++;


  }
cout<<sum;
}
