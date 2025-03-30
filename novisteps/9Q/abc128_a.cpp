#include <iostream>
#include <cmath>
using namespace std;

int main() {
  int A, P;
  cin >> A >> P;
  cout << floor((float)( P + 3 * A ) / 2) << endl;
  return 0;
}
