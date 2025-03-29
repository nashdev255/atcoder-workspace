#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<int> A(5);
  int cnt = 0;
  for ( auto& a : A ) cin >> a;
  for ( int i = 0; i < 4; i++ ) {
    if ( A[i] > A[i+1] ) cnt += A[i]-A[i+1];
  }
  const bool canBeSorted = ( cnt == 1 );
  cout << ( canBeSorted ? "Yes" : "No" ) << endl;
  return 0;
}
