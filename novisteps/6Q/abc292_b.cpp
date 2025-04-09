#include <iostream>
#include <unordered_map>
#define rep(i,n) for ( int i = 0; i < (n); ++i )
using namespace std;

int main() {
  int N, Q;
  cin >> N >> Q;
  unordered_map<int, int> players{};
  rep(i,Q) {
    int c, x;
    cin >> c >> x;
    if ( c == 1 ) {
      ++players[x];
    } else if ( c == 2 ) {
      players[x] += 2;
    } else {
      if ( 2 <= players[x] ) {
        cout << "Yes" << endl;
      } else {
        cout << "No" << endl;
      }
    }
  }
  return 0;
}
