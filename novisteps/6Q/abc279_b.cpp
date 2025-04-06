#include <iostream>
#include <string>
using namespace std;

int main() {
  string S, T;
  cin >> S >> T;
  if ( S.size() < T.size() ) {
    cout << "No" << endl;
    return 0;
  }
  for ( int i = 0; i < S.size()-T.size()+1; ++i ) {
    if ( S.substr(i, T.size()) == T ) {
      cout << "Yes" << endl;
      return 0;
    }
  }
  cout << "No" << endl;
  return 0;
}
