#include <iostream>
#include <string>
using namespace std;

int main() {
  string S;
  cin >> S;
  for ( char c : S ) cout << (char)(c-('a'-'A'));
  return 0;
}
