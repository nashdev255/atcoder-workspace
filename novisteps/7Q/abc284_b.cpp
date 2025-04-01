#include <iostream>
#include <vector>
#define rep(i,n) for ( int i = 0; i < (n); ++i )
using namespace std;

int countNumberOfOddNumbers(vector<int>& A) {
  int cnt = 0;
  for ( auto& a : A ) {
    if ( a%2 == 1 ) ++cnt;
  }
  return cnt;
}

int main() {
  int T;
  cin >> T;
  rep(i,T) {
    int N;
    cin >> N;
    vector<int> A(N);
    for ( auto& a : A ) cin >> a;
    cout << countNumberOfOddNumbers(A) << endl;
  }
  return 0;
}
