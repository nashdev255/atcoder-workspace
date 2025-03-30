#include <iostream>
#include <cmath>
using namespace std;

int main() {
  int A, B, C;
  cin >> A >> B >> C;
  cout << min((int)floor((float)B/A), C) << endl;
  return 0;
}
