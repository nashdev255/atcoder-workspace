#include <iostream>
using namespace std;

int main() {
  int X, t;
  cin >> X >> t;
  cout << max(0, X-t) << endl;
  return 0;
}
