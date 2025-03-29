#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<int> A(3);
  for ( auto& a : A ) cin >> a;
  bool isSatisfy = false;
  if ( A[0] * A[1] == A[2] ) isSatisfy = true;
  if ( A[0] * A[2] == A[1] ) isSatisfy = true;
  if ( A[1] * A[2] == A[0] ) isSatisfy = true;
  if ( A[1] * A[0] == A[2] ) isSatisfy = true;
  if ( A[2] * A[1] == A[0] ) isSatisfy = true;
  if ( A[2] * A[0] == A[1] ) isSatisfy = true;
  cout << ( isSatisfy ? "Yes" : "No" ) << endl;
  return 0;
}
