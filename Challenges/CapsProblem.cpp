#include <bits/stdc++.h>
using namespace std;
int main() {
  string caps; cin >> caps;
  if (islower(caps[0])) {caps[0]=toupper(caps[0]);}
  for (int i=1; i<caps.length(); i++) {
    if (isupper(caps[i])) {caps[i]=tolower(caps[i]);}
  }
 cout << caps << endl;






}
