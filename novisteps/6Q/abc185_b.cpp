#include <iostream>
#include <vector>
#define rep(i,n) for ( int i = 0; i < (n); ++i )
using namespace std;

int main() {
  int N, M, T;
  cin >> N >> M >> T;
  vector<int> A(M), B(M);
  rep(i,M) cin >> A[i] >> B[i];
  int batteryLeft = N;
  int it = 0;
  bool isAtCafe = false;
  for ( int t = 0; t < B[B.size()-1]; ++t ) {
    if ( t == A[it] ) isAtCafe = true;
    if ( t == B[it] ) {
      isAtCafe = false;
      ++it;
    }
    if ( isAtCafe ) ++batteryLeft;
    else --batteryLeft;
    if ( batteryLeft <= 0 ) {
      cout << "No" << endl;
      return 0;
    }
    if ( batteryLeft > N ) batteryLeft = N;
  }
  if ( 0 >= batteryLeft - ( T - B[B.size()-1] ) ) cout << "No" << endl;
  else cout << "Yes" << endl;
  return 0;
}
