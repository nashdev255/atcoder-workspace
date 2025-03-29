#include <iostream>
#include <string>
using namespace std;

int main() {
  string S;
  cin >> S;
  int cnt = 0;
  for ( int i = 0; i < S.size(); i++ ) {
    if ( S[i] == '2' ) cnt++;
  }
  for ( int i = 0; i < cnt; i++ ) {
    cout << '2';
  }
  cout << endl;
  return 0;
}
