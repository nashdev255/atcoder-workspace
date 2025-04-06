#include <iostream>
#include <string>
#define rep(i,n) for ( int i = 0; i < (n); ++i )
using namespace std;

int main() {
  string S;
  cin >> S;
  const int N = S.size();
  string T("oxxoxxoxxoxxoxxoxx");
  rep(i,T.size()-2) {
    if ( T.substr(i, N) == S ) {
      cout << "Yes" << endl;
      return 0;
    }
  }
  cout << "No" << endl;
  return 0;
}
