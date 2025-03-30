#include <iostream>
#include <string>
using namespace std;

int main() {
  string S;
  cin >> S;
  int cnt = 0;
  for ( auto& s : S ) {
    if ( s == 'v' ) ++cnt;
    else cnt += 2;
  }
  cout << cnt << endl;
  return 0;
}
