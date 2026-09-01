#include <bits/stdc++.h>
using namespace std;





int main() {
    short t;
  long long n;cin>>t;


 while(t--) {
     int  val =0,ctr=0, bit, i =0 , sum =0;
     cin>>n;
     while (n !=0) {
         bit = n % 2;
         n/=2;
         if (bit == 1)ctr++;
         sum+= (bit * pow(10, i));
         i++;


     }
     for (int i =0; i< ctr; i++) {
         val+=pow(2, i);

     }
     cout<<val<<endl;

 }
}
