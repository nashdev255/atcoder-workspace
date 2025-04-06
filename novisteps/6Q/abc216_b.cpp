#include <iostream>
#include <string>
#include <vector>
#define rep(i,n) for ( int i = 0; i < (n); ++i )
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<string> S(N), T(N);
  rep(i,N) cin >> S[i] >> T[i];
  for ( int i = 0; i < N-1; ++i ) {
    for ( int j = i+1; j < N; ++j ) {
      if ( S[i] == S[j] && T[i] == T[j] ) {
        cout << "Yes" << endl;
        return 0;
      }
    }
  }
  cout << "No" << endl;
  return 0;
}
