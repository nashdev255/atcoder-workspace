#include <iostream>
#include <vector>
#define rep(i,n) for ( int i = 0; i < (n); ++i )
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> L(N);
  rep(i,N) cin >> L[i];
  int res = 0;
  for ( int i = 0; i < N-2; ++i ) {
    for ( int j = i+1; j < N-1; ++j ) {
      for ( int k = j+1; k < N; ++k ) {
        const int a = L[i], b = L[j], c = L[k];
        const bool isAllDifferent = ( a != b && b != c && c != a );
        const bool isTriangleExist = ( a+b > c && b+c > a && c+a > b );
        if ( isAllDifferent && isTriangleExist ) ++res;
      }
    }
  }
  cout << res << endl;
  return 0;
}
