#include <bits/stdc++.h>
using namespace std;


int main() {
 int t; cin>>t;
    while(t--) {
        int sum =0;
        int n, q; cin>>n>>q;
        int arr[n + 1];
        for(int i=1; i<=n; i++) cin>>arr[i];
        for(int i=1; i<=n; i++) {
            sum += arr[i];
        }
        int pfx [n + 1];
        for(int i=1; i<=n; i++) {
            pfx[i] =arr[i] + pfx[i-1];
        }

        while(q--) {
            int l, r, k; cin>>l>>r>>k;
            int range = pfx[r] - pfx[l - 1];
            const int test = sum - range + (k*(r-l +1));
            cout<<((test % 2 == 0) ? "NO" :"YES")<<endl;

        }

    }
    return 0;
}
