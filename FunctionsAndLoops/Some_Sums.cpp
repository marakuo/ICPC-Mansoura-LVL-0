#include <bits/stdc++.h>
using namespace std;


int sumdigit(int n) {
 int sum =0;

 while (n !=0) {
  sum += (n % 10); n/=10;


  
 }
 return sum;
}


int main() {
 int n, a, b,sum =0;cin>>n>>a>>b;
 int mn=min(a,b), mx=max(a,b);
 for (int i =1; i <= n; i++) {
  if (sumdigit(i) >= mn && sumdigit(i)  <=mx) {
   sum+=i;
  }

 }
cout<<sum;





}
