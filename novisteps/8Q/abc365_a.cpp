#include <iostream>
using namespace std;

int main() {
  int Y;
  cin >> Y;
  int ans;
  if ( Y % 4 != 0 ) ans = 365;
  if ( Y % 4 == 0 && Y % 100 != 0 ) ans = 366;
  if ( Y % 100 == 0 && Y % 400 != 0 ) ans = 365;
  if ( Y % 400 == 0 ) ans = 366;
  cout << ans << endl;
  return 0;
}
