#include <iostream>
using namespace std;

int main() {
  int N, X;
  cin >> N >> X;
  int cnt = 0;
  for ( int i = 0; i < N; ++i ) {
    int s;
    cin >> s;
    if ( s <= X ) cnt += s;
  }
  cout << cnt << endl;
  return 0;
}
