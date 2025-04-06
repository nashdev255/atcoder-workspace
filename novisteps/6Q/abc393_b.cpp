#include <iostream>
#include <string>
using namespace std;

int main() {
  string S;
  cin >> S;
  const int N = S.size();
  int res = 0;
  for ( int i = 0; i < N-2; ++i ) {
    for ( int j = i+1; j < N-1; ++j ) {
      for ( int k = j+1; k < N; ++k ) {
        if ( S[i] == 'A' && S[j] == 'B' && S[k] == 'C' ) {
          if ( j-i == k-j ) ++res;
        }
      }
    }
  }
  cout << res << endl;
  return 0;
}
