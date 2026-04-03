#include <bits/stdc++.h>
using namespace std;
 
 
 
int main() {
   int n; cin>>n;
    long long arr[n];
    for (int i =0; i <n ; i++) {
        cin>>arr[i];
    }
    long long sum = 0;
    for (int i =0; i <n ; i++) {
        long long temp = arr[i];
        int freq[10] ={};
        while (temp > 0) {
            int digit = temp%10;
            temp/=10;
            freq[digit]++;
            if (freq[digit] > 1) {sum+=arr[i]; break;}
        }
    }cout << sum <<endl;
 
 
    return 0;
}
