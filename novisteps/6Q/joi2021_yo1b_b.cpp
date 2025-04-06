#include <iostream>
#include <string>
#include <vector>
#define rep(i,n) for ( int i = 0; i < (n); ++i )
using namespace std;

int main() {
  int N;
  string S;
  cin >> N >> S;
  vector<char> ioi({'I', 'O', 'I'});
  auto it = ioi.begin();
  rep(i,N) {
    if ( S[i] == *it ) ++it;
    if ( it == ioi.end() ) break;
  }
  cout << ( it == ioi.end() ? "Yes" : "No" ) << endl;
  return 0;
}
