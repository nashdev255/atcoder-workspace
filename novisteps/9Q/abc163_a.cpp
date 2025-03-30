#include <iostream>
#include <iomanip>
using namespace std;

constexpr double PI = 3.141592653589793238;

int main() {
  double R;
  cin >> R;
  cout << fixed << setprecision(10) << 2 * PI * R << endl;
  return 0;
}
