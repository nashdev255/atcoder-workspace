#include <iostream>
#include <vector>
using namespace std;

int main() {
  int N, X;
  cin >> N >> X;
  vector<int> Adash;
  for ( int i = 0; i < N; ++i ) {
    int a;
    cin >> a;
    if ( a != X ) Adash.emplace_back(a);
  }
  for ( auto& adash : Adash ) cout << adash << ' ';
  return 0;
}
