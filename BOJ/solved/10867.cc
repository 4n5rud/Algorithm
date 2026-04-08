#include <iostream>
#include <set>


int main() {
  int n;
  std::cin >> n;

  std::set<int> set;
  for (int i = 0; i < n; i++) {
    int t;
    std::cin >> t;
    set.insert(t);
  }

  int size = set.size();
  for (int i = 0; i < size; i++) {
    std::cout << *set.begin();
    set.erase(set.begin());
    if (i != size-1) {
      std::cout << " ";
    }
  }



}