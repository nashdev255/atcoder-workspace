#include <iostream>
#include <vector>
using namespace std;

int main() {
  int N;
  cin >> N;
  int cnt = 0;
  for ( int i = 0; i < N; ++i ) {
    int a;
    cin >> a;
    cnt += a;
  }
  cout << cnt << endl;;
  return 0;
}
