#include <iostream>
using namespace std;

int main() {
  int K, X;
  cin >> K >> X;
  cout << ( X <= 500 * K ? "Yes" : "No" ) << endl;
  return 0;
}
