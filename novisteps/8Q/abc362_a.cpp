#include <iostream>
#include <string>
using namespace std;

int main() {
  int R, G, B;
  string C;
  cin >> R >> G >> B >> C;
  int res = 0;
  if ( C == "Red" ) res += min(G, B);
  else if ( C == "Green" ) res += min(R, B);
  else res += min(R, G);
  cout << res << endl;
  return 0;
}
