#include <iostream>
#include <string>
#include <algorithm>
#define rep(i,n) for ( int i = 0; i < (n); ++i )
using namespace std;

int main() {
  int L, R;
  cin >> L >> R;
  string AC = "atcoder";
  cout << AC.substr(L-1, R-L+1) << endl;
  return 0;
}
