#include <iostream>
#include <string>
using namespace std;

int main() {
  string S_1, S_2;
  cin >> S_1 >> S_2;
  if ( S_1 == "sick" && S_2 == "sick" ) {
    cout << 1 << endl;
    return 0;
  }
  if ( S_1 == "sick" && S_2 == "fine" ) {
    cout << 2 << endl;
    return 0;
  }
  if ( S_1 == "fine" && S_2 == "sick" ) {
    cout << 3 << endl;
    return 0;
  }
  cout << 4 << endl;
  return 0;
}
