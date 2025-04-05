#include <iostream>
#include <vector>
#include <set>
#define rep(i,n) for ( int i = 0; i < (n); ++i )
using namespace std;

int main() {
  int N, M;
  cin >> N >> M;
  vector<int> A(2000);
  set<int> B;
  rep(i,N) {
    int a;
    cin >> a;
    ++A[a-1];
  }
  rep(i,M) {
    int b;
    cin >> b;
    B.emplace(b);
  }
  int res = 0;
  for ( auto& b : B ) res += A[b-1];
  cout << res << endl;
  return 0;
}
