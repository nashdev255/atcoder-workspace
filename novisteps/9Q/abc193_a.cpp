#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  double A, B;
  cin >> A >> B;
  cout << fixed << setprecision(3) << ( 1 - B / A ) * 100 << endl;
  return 0;
}
