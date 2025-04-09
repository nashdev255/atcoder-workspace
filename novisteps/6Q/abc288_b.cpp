#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#define rep(i,n) for ( int i = 0; i < (n); ++i )
using namespace std;

int main() {
  int N, K;
  cin >> N >> K;
  vector<string> S(N);
  rep(i,N) cin >> S[i];
  sort(S.begin(), S.begin()+K);
  rep(i,K) cout << S[i] << endl;
  return 0;
}
