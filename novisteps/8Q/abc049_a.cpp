#include <iostream>
#include <string>
using namespace std;

int main() {
  char c;
  cin >> c;
  string S("aiueo");
  bool flg = false;
  for ( char s : S ) {
    if ( c == s ) flg = true;
  }
  cout << ( flg ? "vowel" : "consonant" ) << endl;
  return 0;
}
