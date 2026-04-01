#include <iostream>
#include <queue>

int main() {
  int n;
  std::cin >> n;

  std::string s;
  int v;

  std::queue<int> q;
  for (int i = 0 ; i < n; i++) {
    std::cin >> s;

    if (s == "push") {
      std::cin >> v;
      q.push(v);
    } else if (s == "pop") {
      if (!q.empty()) {
        std::cout << q.front() << '\n';
        q.pop();
      } else {
        std::cout << -1 << '\n';
      }
    } else if (s == "size") {
      std::cout << q.size() << '\n';
    } else if (s == "empty") {
      std::cout << (q.empty() ? "1" : "0") << '\n';
    } else if (s == "front") {
      std::cout << (q.empty() ? -1 : q.front()) << '\n';
    } else if (s == "back") {
      std::cout << (q.empty() ? -1 : q.back()) << '\n';
    }
  }
}