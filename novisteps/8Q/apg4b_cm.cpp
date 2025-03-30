#include <iostream>
#define rep(i,n) for ( int i = 0; i < (n); ++i )
using namespace std;

int main() {
  int A, B;
  cin >> A >> B;
  cout << "A:";
  rep(i,A) cout << ']';
  cout << endl;
  cout << "B:";
  rep(i,B) cout << ']';
  cout << endl;
  return 0;
}
