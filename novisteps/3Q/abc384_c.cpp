#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#define rep(i,n) for ( int i = 0; i < (n); ++i )
using namespace std;

int main() {
  string problems("ABCDE");
  vector<int> points(5);
  rep(i,5) cin >> points[i];
  vector<pair<string, int>> users((1<<5)-1);
  for ( int bit = 1; bit < (1<<5); ++bit ) {
    string username("");
    int point = 0;
    rep(i,5) {
      if ( bit & (1<<i) ) {
        point += points[i];
        username += problems[i];
      }
    }
    users[bit-1] = pair<string, int>(username, point);
  }
  sort(
    users.begin(),
    users.end(),
    [](pair<string, int> p, pair<string, int> q) -> bool {
      return p.first < q.first;
    }
  );
  stable_sort(
    users.begin(),
    users.end(),
    [](pair<string, int> p, pair<string, int> q) -> bool {
      return p.second > q.second;
    }
  );
  for ( auto& user : users ) cout << user.first << endl;
  return 0;
}
