#include <iostream>
using namespace std;

int ReLU(int x) {
  if ( 0 <= x ) return x;
  else return 0;
}

int main() {
  int x;
  cin >> x;
  cout << ReLU(x) << endl;
  return 0;
}
