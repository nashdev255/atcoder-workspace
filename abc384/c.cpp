#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

#define rep(i,n) for ( int i = 0; i < (n); ++i )

int main() {
  const string problems("ABCDE");
  vector<int> pointsOfEachProblem(5);
  vector<pair<string,int>> users((1<<5)-1);
  for ( auto& points : pointsOfEachProblem ) cin >> points;
  for ( int bit = 1; bit < (1<<5); bit++ ) {
    string name = "";
    int usersPoints = 0;
    rep(i,5) {
      if ( bit & (1<<i) ) {
        name += problems[i];
        usersPoints += pointsOfEachProblem[i];
      }
    }
    users[bit-1] = pair<string,int>(name,usersPoints);
  }
  ranges::sort(users, less{}, &pair<string,int>::first);
  ranges::stable_sort(users, greater{}, &pair<string,int>::second);
  for ( auto& user : users ) cout << user.first << endl;
  return 0;
}
