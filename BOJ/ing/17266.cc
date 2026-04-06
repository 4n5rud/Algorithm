#include <iostream>

int main() {
  int n, m;
  std::cin >> n >> m;
  int x[m];

  for (int i = 0; i < m; i++) {
    std::cin >> x[i];
  }

  int st = 1;
  int en = n;

  while (st < en) {

    int mid = (st + en) / 2;

    bool garo[m] = {false};
    for (int i = 0; i < m; i++) {
      garo[x] = true;
      for (int j = 1 ; j <= x[i]; j++) {
        if (x+j < m) {
          garo[x+j] = true;

        }
        if (x-j >= 0) {
          garo[x-j] = true;
        }
      }

      for (int j = 0 ; j < m; j++) {
        if (garo[j] == false) {

        }
      }
    }

  }
}