#include <iostream>
#include <vector>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> A(N);
  for ( auto& a : A ) cin >> a;
  bool flg = false;
  for ( int i = 0; i < N-2; ++i ) {
    if ( A[i] == A[i+1] && A[i+1] == A[i+2] ) {
      flg = true;
      break;
    }
  }
  cout << ( flg ? "Yes" : "No" ) << endl;
  return 0;
}
