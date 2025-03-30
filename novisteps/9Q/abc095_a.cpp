#include <iostream>
#include <string>
using namespace std;

int main() {
  string S;
  cin >> S;
  int ans = 700;
  for ( auto& s : S ) {
    if ( s == 'o' ) ans += 100;
  }
  cout << ans << endl;
  return 0;
}
