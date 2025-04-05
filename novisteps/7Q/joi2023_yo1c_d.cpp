#include <iostream>
#include <vector>
#include <algorithm>
#define rep(i,n) for ( int i = 0; i < (n); ++i )
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> A(N);
  rep(i,N) cin >> A[i];
  rep(i,N) {
    int numberOfFaster = 0;
    rep(j,N) {
      if ( A[j] < A[i] ) ++numberOfFaster;
    }
    cout << numberOfFaster + 1 << endl;
  }
  return 0;
}
