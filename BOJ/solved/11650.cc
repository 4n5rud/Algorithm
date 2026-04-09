#include <iostream>
#include <algorithm>
#include <vector>


int main() {
  int n;
  std::cin >> n;
  std::vector<std::pair<int, int>> arr;

  for (int i = 0 ; i < n ; i++) {
    int x,y;
    std::cin >> x >> y;
    arr.push_back(std::make_pair(x, y));
  }

  std::sort(arr.begin(), arr.end());

  for (int i = 0 ; i < n ; i++) {
    std::cout << arr[i].first << " " << arr[i].second << '\n';
  }
}