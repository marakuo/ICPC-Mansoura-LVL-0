#include <bits/stdc++.h>
using namespace std;
int main() {
   int n; cin>>n;

   int freq[101]={};
   int arr[n];
   for(int i=0;i<n;i++) {
      cin>>arr[i];
      freq[arr[i]]++;
   }
   bool flag=false;
   for(int i=1;i<=100;i++) {
      if(freq[i]> 1) {flag=true; break;}
   }
   flag?cout<<"YES"<<endl:cout<<"NO";

}
