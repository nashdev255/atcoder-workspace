#include <iostream>
using namespace std;

int main() {
  int H, A;
  cin >> H >> A;
  int numberOfServalAttacked = 0;
  while ( 0 < H ) {
    H -= A;
    ++numberOfServalAttacked;
  }
  cout << numberOfServalAttacked << endl;
  return 0;
}
