#include <iostream>
#include <algorithm>

int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(0);

  int n;
  std::cin>> n;

  int A[n];
  for (int i = 0 ; i < n ; i++) {
    std::cin >> A[i];
  }
  std::sort(A, A + n);

  int m,x;
  std::cin >> m;
  for (int i = 0 ; i < m ; i++) {
    std::cin >> x;
    int st = 0;
    int en = n - 1;
    int flag = 0;
    while (st <= en) {

      int mid = (en + st)/2;

      if (x == A[mid]) {
        flag = 1;
        break;
      } else if (x < A[mid]) {
          en = mid - 1;
      } else if (x > A[mid]) {
          st = mid + 1;
      }


    }

    if (flag) {
      std::cout << 1 << '\n';
    } else {
      std::cout << 0 << '\n';
    }
  }

}