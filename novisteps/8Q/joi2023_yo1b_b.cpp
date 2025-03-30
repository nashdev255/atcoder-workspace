#include <iostream>
using namespace std;

int main() {
  int A, B;
  cin >> A >> B;
  int ans;
  if ( A < B ) ans = -1;
  else if ( A == B ) ans = 0;
  else ans = 1;
  cout << ans << endl;
  return 0;
}
