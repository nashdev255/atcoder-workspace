#include <iostream>
#include <vector>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> A(N);
  for ( auto& a : A ) cin >> a;
  int isAllSame = true;
  for ( int i = 0; i < N-1; i++ ) {
    if ( A[i] != A[i+1] ) {
      isAllSame = false;
      break;
    }
  }
  cout << ( isAllSame ? "Yes" : "No" ) << endl;
  return 0;
}
