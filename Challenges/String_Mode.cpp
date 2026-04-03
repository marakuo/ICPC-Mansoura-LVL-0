#include <bits/stdc++.h>
using namespace std;

int main() {
    string text;
    cin >> text;

    int freq[26] = {};

    for (int i = 0; i < text.length(); i++) {
        freq[text[i] - 'a']++;
    }

    // Find the maximum frequency
    int ans = *max_element(freq, freq + 26);

    cout << ans << endl;

    return 0;
}
