#include <iostream>
#include <vector>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> A(N);
  for ( auto& a : A ) cin >> a;
  bool flg = true;
  for ( int i = 0; i < N-1; ++i ) {
    if ( A[i+1] <= A[i] ) {
      flg = false;
      break;
    }
  }
  cout << ( flg ? "Yes" : "No" ) << endl;
  return 0;
}
