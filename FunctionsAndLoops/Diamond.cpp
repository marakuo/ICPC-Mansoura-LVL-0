#include <bits/stdc++.h>
using namespace std;





int main() {
   short n; cin>>n;
   short k =1, space = n-1;
   for(int i=1;i<=n;i++) {
      for(int j=1;j<=space;j++) {
         cout<<" ";

      }
      space-=1;
      for(int j=1;j<=k;j++) {
         cout<<"*";
      }
      k+=2;
      cout<<'\n';

   }
   k-=2;

    // the lower pyramid
   space =1;
   for(int i=1;i<=n;i++) {
      for (int t =1; t <space ;t++) {
         cout<<" ";
      }
      space+=1;
      for (int j = k; j >0; j--) {
         cout<<"*";
      }
      k-=2;

      cout<<'\n';
   }


}
