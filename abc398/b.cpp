#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define rep(i,n) for ( int i = 0; i < (n); ++i )

int main() {
  int size = 7;
  vector<int> A(size);
  for ( auto& a : A ) cin >> a;
  bool isTwocard = false;
  bool isThreecard = false;
  for ( int i = 1; i <= 13; i++ ) {
    if ( 3 <= count(A.begin(), A.end(), i) && !isThreecard ) {
      isThreecard = true;
      for ( int j = 0; j < size; j++) {
        if ( A[j] == i ) {
          A.erase(A.begin() + j);
          size--;
        }
      }
      continue;
    }
    if ( 2 <= count(A.begin(), A.end(), i) && !isTwocard ) {
      isTwocard = true;
      for ( int j = 0; j < size; j++) {
        if ( A[j] == i ) {
          A.erase(A.begin() + j);
          size--;
        }
      }
      continue;
    }
  }
  const bool isFullhouse = ( isTwocard && isThreecard );
  cout << ( isFullhouse ? "Yes" : "No" ) << endl;
  return 0;
}
