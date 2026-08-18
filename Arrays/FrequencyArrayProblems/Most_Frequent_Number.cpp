#include <bits/stdc++.h>
using namespace std;
int main() {
   int n, x; cin>>n;

   int freq[n + 1]={};
   int arr[n];
   for(int i=0;i<n;i++) {
      cin>>arr[i];
      freq[arr[i]]++;
   }
   cout<<"the most frequent number is: "<<*max_element(freq, freq+n);

}
