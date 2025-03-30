#include <iostream>
using namespace std;

int main() {
  int N;
  cin >> N;
  int ans;
  if ( 1 <= N && N <= 125 ) ans = 4;
  else if ( 126 <= N && N <= 211 ) ans = 6;
  else ans = 8;
  cout << ans << endl;
  return 0;
}
