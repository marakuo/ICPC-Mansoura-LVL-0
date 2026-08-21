#include <bits/stdc++.h>
using namespace std;
int main() {
  int number, fact =1; cin >> number;
  while (number >0) {
    fact*=number;
    number--;


  }
  cout<<"the factorial of the number is: "<<fact<<'\n';
}
