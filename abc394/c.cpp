#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
  string S;
  cin >> S;
  reverse(S.begin(), S.end());
  for ( int i = 0; i < S.size() - 1 ; i++ ) {
    if ( S.substr(i, 2) == "AW" ) {
      S.replace(i, 2, "CA");
      continue;
    }
  }
  reverse(S.begin(), S.end());
  cout << S << endl;
  return 0;
}
