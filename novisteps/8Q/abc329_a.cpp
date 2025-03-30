#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
using ll = long long;

int main() {
  ll H;
  cin >> H;
  cout << fixed << setprecision(9) << sqrt<ll>(H * ( 12800000 + H )) << endl;
  return 0;
}
