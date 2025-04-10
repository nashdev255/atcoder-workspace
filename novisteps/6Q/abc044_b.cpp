#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int main() {
  string w;
  cin >> w;
  unordered_map<char, int> cnts{};
  for ( char c : w ) ++cnts[c];
  bool res = true;
  for ( auto& cnt : cnts ) {
    if ( cnt.second%2 != 0 ) res = false;
  }
  cout << ( res ? "Yes" : "No" ) << endl;
  return 0;
}
