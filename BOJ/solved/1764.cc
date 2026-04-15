#include <iostream>
#include <set>
#include <vector>
#include <algorithm>
int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(0);
  std::set<std::string> s;
  int n,m;
  std::cin >> n >> m;

  for (int i = 0; i < m; i++) {
    std::string tmp;
    std::cin >> tmp;
    s.insert(tmp);
  }

  std::vector<std::string> db;
  for (int i = 0 ; i < m ; i++) {
    std::string tmp;
    std::cin >> tmp;
    if (s.count(tmp)) {
      db.push_back(tmp);
    }
  }


  std::sort(db.begin(), db.end());
  std::cout << db.size() << '\n';
  for (int i = 0; i < db.size(); i++) {
    std::cout << db[i] << '\n';
  }
}