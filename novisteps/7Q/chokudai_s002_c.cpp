#include <iostream>
using namespace std;
using ll = long long;

int main() {
  int N;
  cin >> N;
  ll ans = 2;
  for ( int i = 0; i < N; ++i ) {
    ll a, b;
    cin >> a >> b;
    ans = max(ans, a + b);
  }
  cout << ans << endl;
  return 0;
}
