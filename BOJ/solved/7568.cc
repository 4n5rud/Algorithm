#include <iostream>

int main() {
  int n;
  std::cin >> n;

  int x[999], y[999];
  int rank[999] = {0};

  for (int i = 0; i < n; i++) {
    std::cin >> x[i] >> y[i];
  }

  for (int i = 0 ; i < n ; i++) {
    for (int j = 0 ; j < n; j++) {
      if (i == j) {
        continue;
      }
      if (x[i] < x[j] && y[i] < y[j]) {
        rank[i]++;
      }
    }
  }

  for (int i = 0 ; i < n; i++) {
    std::cout << rank[i] + 1 << " ";
  }

  return 0;
}