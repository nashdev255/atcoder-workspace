#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#define rep(i,n) for ( int i = 0; i < (n); ++i )
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<string> S(N);
  vector<int> C(N);
  rep(i,N) cin >> S[i] >> C[i];
  int T = 0;
  rep(i,N) T += C[i];
  sort(S.begin(), S.end());
  rep(i,N) {
    if ( i == T%N ) {
      cout << S[i] << endl;
      return 0;
    }
  }
  return 0;
}
