#include <iostream>
#include <string>
#include <vector>
#define rep(i,n) for ( int i = 0; i < (n); ++i )
using namespace std;

int main() {
  string S;
  cin >> S;
  const int N = S.size();
  vector<bool> bucket(10, false);
  rep(i,N) bucket[S[i]-'0'] = true;
  rep(i,10) {
    if ( !bucket[i] ) {
      cout << i << endl;
      return 0;
    }
  }
  return 0;
}
