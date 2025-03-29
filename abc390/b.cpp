#include <iostream>
#include <vector>
using namespace std;
using ll = long long;

int main() {
  int N;
  cin >> N;
  vector<ll> A(N);
  for ( auto& a : A ) cin >> a;
  for ( int i = 0; i < N - 2; i++ ) {
    if ( A[i+1] * A[i+1] != A[i] * A[i+2] ) {
      cout << "No" << endl;
      return 0;
    }
  }
  cout << "Yes" << endl;
  return 0;
}
