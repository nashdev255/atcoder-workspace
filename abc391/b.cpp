#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
  int N, M;
  cin >> N >> M;
  vector<string> S(N), T(M);
  for ( auto& s : S ) cin >> s;
  for ( auto& t : T ) cin >> t;
  for ( int i = 0; i <= N - M; i++ ) {
    for ( int j = 0; j <= N - M; j++ ) {
      bool isMatched = true;
      for ( int k = 0; k < M; k++ ) {
        for ( int l = 0; l < M; l++ ) {
          if ( S[i+k][j+l] != T[k][l] ) isMatched = false;
        }
      }
      if ( isMatched ) {
        cout << i + 1 << ' ' << j + 1 << endl;
        return 0;
      }
    }
  }
  return 0;
}
