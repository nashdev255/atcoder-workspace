#include <iostream>
#include <string>
#define rep(i,n) for ( int i = 0; i < (n); ++i )
using namespace std;

int main() {
  string S;
  cin >> S;
  const int N = S.size();
  string minStr = S + 'a';
  string maxStr = "";
  minStr = min(minStr, S);
  maxStr = max(maxStr, S);
  rep(i,N) {
    S.push_back(S[0]);
    S.erase(0, 1);
    minStr = min(minStr, S);
    maxStr = max(maxStr, S);
  }
  cout << minStr << endl;
  cout << maxStr << endl;
  return 0;
}
