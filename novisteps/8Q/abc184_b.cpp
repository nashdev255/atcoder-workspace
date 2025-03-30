#include <iostream>
#include <string>
using namespace std;

int main() {
  int N, X;
  string S;
  cin >> N >> X >> S;
  for ( char c : S ) {
    if ( c == 'o' ) ++X;
    else {
      if ( 0 <= X - 1 ) --X;
    }
  }
  cout << X << endl;
  return 0;
}
