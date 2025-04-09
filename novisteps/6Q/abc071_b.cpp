#include <iostream>
#include <string>
#include <unordered_map>
#define rep(i,n) for ( int i = 0; i < (n); ++i )
using namespace std;

int main() {
  string S;
  cin >> S;
  const int N = S.size();
  unordered_map<char, int> cnts{};
  rep(i,N) ++cnts[S[i]];
  for ( char c = 'a'; c <= 'z'; c++ ) {
    if ( cnts[c] == 0 ) {
      cout << c << endl;
      return 0;
    }
  }
  cout << "None" << endl;
  return 0;
}
