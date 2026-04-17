#include <bits/stdc++.h>
using namespace std;


int main() {
    int n; cin >> n;
    string arr[n];
    string test ="";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++) {
        test += arr[i][0];

    }
    if (test == arr[0]) cout << "YES" << endl;
    else cout << "NO" << endl;


    return 0;
}
