#include <iostream>
using namespace std;

int main() {
  int A, B;
  cin >> A >> B;
  int ans;
  if ( 15 <= A + B && 8 <= B ) ans = 1;
  else if ( 10 <= A + B && 3 <= B ) ans = 2;
  else if ( 3 <= A + B ) ans = 3;
  else ans = 4;
  cout << ans << endl;
  return 0;
}
