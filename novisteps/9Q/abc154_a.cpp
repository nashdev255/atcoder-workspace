#include <iostream>
#include <string>
using namespace std;

int main() {
  string S, T, U;
  int A, B;
  cin >> S >> T >> A >> B >> U;
  if ( S == U ) --A;
  else if ( T == U ) --B;
  cout << A << ' ' << B << endl;
  return 0;
}
