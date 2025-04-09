#include <iostream>
#include <set>
#define rep(i,n) for ( int i = 0; i < (n); ++i )
using namespace std;

int main() {
  int N;
  cin >> N;
  set<int> s{};
  rep(i,N) {
    int a;
    cin >> a;
    s.emplace(a);
  }
  cout << s.size() << endl;
  return 0;
}
