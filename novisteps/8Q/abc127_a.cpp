#include <iostream>
using namespace std;

int main() {
  int A, B;
  cin >> A >> B;
  if ( A <= 5 ) B = 0;
  else if ( 6 <= A && A <= 12 ) B /= 2;
  cout << B << endl;
  return 0;
}
