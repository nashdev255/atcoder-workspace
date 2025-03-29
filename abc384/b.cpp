#include <iostream>
#include <vector>
using namespace std;

#define rep(i,n) for ( int i = 0; i < (n); ++i )

int main() {
  int N, R;
  cin >> N >> R;
  vector<int> D(N), A(N);
  rep(i,N) cin >> D[i] >> A[i];
  rep(i,N) {
    if ( D[i] == 1 ) {
      if ( 1600 <= R && R <= 2799 ) {
        R += A[i];
      }
    }
    if ( D[i] == 2 ) {
      if ( 1200 <= R && R <= 2399 ) {
        R += A[i];
      }
    }
  }
  cout << R << endl;
  return 0;
}
