#include <iostream>
#include <set>
#define rep(i,n) for ( int i = 0; i < (n); ++i )
using namespace std;

int main() {
  int N, M;
  cin >> N >> M;
  set<int> A, B;
  rep(i,N) {
    int a;
    cin >> a;
    A.emplace(a);
  }
  rep(i,M) {
    int b;
    cin >> b;
    B.emplace(b);
  }
  int res = 0;
  for ( auto& a : A ) {
    for ( auto& b : B ) {
      if ( a == b ) cout << a << endl;
    }
  }
  return 0;
}
