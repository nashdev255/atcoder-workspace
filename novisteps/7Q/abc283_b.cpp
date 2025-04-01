#include <iostream>
#include <vector>
#define rep(i,n) for ( int i = 0; i < (n); ++i )
using namespace std;

int main() {
  int N, Q;
  cin >> N;
  vector<int> A(N);
  rep(i,N) cin >> A[i];
  cin >> Q;
  rep(i,Q) {
    int f, k;
    cin >> f >> k;
    if ( f == 1 ) {
      int x;
      cin >> x;
      A[k-1] = x;
    } else {
      cout << A[k-1] << endl;
    }
  }
  return 0;
}
