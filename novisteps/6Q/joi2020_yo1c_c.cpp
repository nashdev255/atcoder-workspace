#include <iostream>
#include <vector>
#define rep(i,n) for ( int i = 0; i < (n); ++i )
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> A(N);
  rep(i,N) cin >> A[i];
  int longestAscendingContiguousSubsequence = 1;
  int cnt = 1;
  for ( int i = 1; i < N; ++i ) {
    if ( A[i-1] <= A[i] ) ++cnt;
    else cnt = 1;
    longestAscendingContiguousSubsequence = max(longestAscendingContiguousSubsequence, cnt);
  }
  cout << longestAscendingContiguousSubsequence << endl;
  return 0;
}
