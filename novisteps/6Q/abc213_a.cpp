#include <iostream>
#define rep(i,n) for ( int i = 0; i < (n); ++i )
using namespace std;

int main() {
  int A, B;
  cin >> A >> B;
  rep(i,(1<<8)) {
    if ( (A^i) == B ) {
      cout << i << endl;
      break;
    }
  }
  return 0;
}
