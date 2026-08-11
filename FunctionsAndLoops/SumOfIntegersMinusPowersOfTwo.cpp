#include <bits/stdc++.h>
using namespace std;

int main() {
   long long  n; cin>>n;
   long long sum = n * (n+1)/ 2;
   for (int i =0; pow(2, i) <=n ; i++) {
      sum -=( 2 *pow(2, i));
   }
   cout<< sum<<endl;


}
