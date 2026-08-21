#include <bits/stdc++.h>
using namespace std;
int main() {
  int number; cin >> number;
  long long fact = 1;
  while (number >0) {
    fact*=number;
    number--;


  }
  cout<<"the factorial of the number is: "<<fact<<'\n';
}
