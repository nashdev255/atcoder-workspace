#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() {
  int N;
  cin >> N;
  if ( 42 <= N ) ++N;
  cout << "AGC" << setw(3) << setfill('0') << N << endl;
  return 0;
}
