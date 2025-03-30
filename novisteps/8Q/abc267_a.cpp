#include <iostream>
#include <string>
using namespace std;

int main() {
  string S;
  cin >> S;
  int ans;
  if ( S == "Monday" ) ans = 5;
  else if ( S == "Tuesday" ) ans = 4;
  else if ( S == "Wednesday" ) ans = 3;
  else if ( S == "Thursday" ) ans = 2;
  else ans = 1;
  cout << ans << endl;
  return 0;
}
