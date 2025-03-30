#include <iostream>
#include <vector>
#define rep(i,n) for ( int i = 0; i < (n); ++i )
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> vec;
  rep(i,N) {
    int A, B;
    cin >> A >> B;
    vec.emplace_back(A + B);
  }
  for ( auto& v : vec ) cout << v << endl;
  return 0;
}
