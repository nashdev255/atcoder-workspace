#include <iostream>
#include <vector>
#define rep(i,n) for ( int i = 0; i < (n); ++i )
using namespace std;

int main() {
  int K, N;
  cin >> N >> K;
  vector<int> A(N);
  rep(i,N) cin >> A[i];
  int res = 0, vacantSeatsLeft = K;
  for ( ;; ) {
    if ( A.empty() ) {
      ++res;
      break;
    }
    if ( vacantSeatsLeft < A[0] ) {
      ++res;
      vacantSeatsLeft = K;
    } else {
      vacantSeatsLeft -= A[0];
      A.erase(A.begin());
    }
  }
  cout << res << endl;
  return 0;
}
