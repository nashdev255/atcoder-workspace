#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <set>
#include <map>
#include <unordered_map>
#include <algorithm>
#define rep(i,n) for ( int i = 0; i < (n); ++i )
using namespace std;
using ll = long long;

int main() {
  int Q;
  cin >> Q;
  queue<int> que{};
  rep(i,Q) {
    int a;
    cin >> a;
    if ( a == 1 ) {
      int x;
      cin >> x;
      que.push(x);
    } else {
      cout << que.front() << endl;
      que.pop();
    }
  }
  return 0;
}
