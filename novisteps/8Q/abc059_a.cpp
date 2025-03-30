#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
  vector<string> words(3);
  for ( auto& word : words ) cin >> word;
  for ( auto& word : words ) cout << char(word[0]-('a'-'A'));
  return 0;
}
