#include <iostream>
#include <string>
using namespace std;

int main() {
  string S;
  cin >> S;
  int cnt = 0;
  for ( auto& s : S ) {
    if ( s == '1' ) ++cnt;
  }
  cout << cnt << endl;
  return 0;
}
