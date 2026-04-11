#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int n; cin>>n;
    int arr[n];
 
 
 
    int ctr3=0, ctr1 =1, ctr2=0;
    for (int i =0 ; i <n ; i++) {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    int s1 = arr[0];
 
    for (int i =1 ; i <n ; i++) {
        if (arr[i] ==0) ctr3++;
 
    }
    int set3[ctr3];
    int set2[n-1-ctr3];
    int j = 0, k = 0;
    for (int i = 1; i < n; i++) {
        if (arr[i] == 0) {
            set3[j] = arr[i];
            j++;
        } else {
            set2[k] = arr[i];
            k++;
            ctr2++;
        }
    }
    int neg_count = 0;
    for (int i = 0; i < ctr2; i++)
        if (set2[i] < 0) neg_count++;
 
    if (neg_count % 2 != 0) {
        set3[j] = set2[0];
        j++; ctr3++;
        for (int i = 0; i < ctr2-1; i++)
            set2[i] = set2[i+1];
        ctr2--;
    }
    cout << ctr1 << " "<<s1<<endl;
    cout << ctr2 << " ";
    for (int i =0 ; i <ctr2 ; i++) {
        cout << set2[i] << " ";
    }
    cout << endl;
 
    cout << ctr3 << " ";
    for (int i =0 ; i <ctr3 ; i++) {
        cout << set3[i] << " ";
    }
    cout << endl;
 
 
 
 
 
    return 0;
}
