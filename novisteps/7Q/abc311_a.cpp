#include <iostream>
#include <string>
using namespace std;

int main() {
  int N;
  string S;
  cin >> N >> S;
  string abc("ABC");
  for ( int i = 0; i < N; ++i ) {
    for ( int j = 0; j < 3; j++ ) {
      if ( abc[j] == S[i] ) abc[j] = '0';
    }
    if ( abc == "000" ) {
      cout << i + 1 << endl;
      break;
    }
  }
  return 0;
}
