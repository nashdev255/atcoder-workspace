#include <iostream>
#include <set>
#define rep(i,n) for ( int i = 0; i < (n); ++i )
using namespace std;

int main() {
  int N;
  cin >> N;
  set<int> D;
  rep(i,N) {
    int d;
    cin >> d;
    D.emplace(d);
  }
  int res = 0;
  for ( auto& d : D ) ++res;
  cout << res << endl;
  return 0;
}
