#include <iostream>
#include <vector>
#define rep(i,n) for ( int i = 0; i < (n); ++i )
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> A(N, 0);
  rep(i,2*N-1) {
    int a;
    cin >> a;
    ++A[a-1];
  }
  rep(i,N) {
    if ( A[i] != 2 ) {
      cout << i + 1 << endl;
      break;
    }
  }
  return 0;
}
