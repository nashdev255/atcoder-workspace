#include <iostream>
#include <unordered_map>
#define rep(i,n) for ( int i = 0; i < (n); ++i )
using namespace std;

int main() {
  int N;
  cin >> N;
  unordered_map<int, int> cnts{};
  rep(i,N) {
    int a;
    cin >> a;
    ++cnts[a];
  }
  for ( int i = 0; i <= 2000; ++i ) {
    if ( cnts[i] == 0 ) {
      cout << i << endl;
      return 0;
    }
  }
  return 0;
}
