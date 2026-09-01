#include <bits/stdc++.h>
using namespace std;





int main() {
   short n; cin>>n;
   int sum =1;
   for (int i =1; i <=n;i++) {
      cout<<sum<<" ";
      cout<<sum + 1<<" ";
      cout<<sum + 2<<" ";
      cout<<"PUM"<<'\n';
      sum+=4;
   }




}
