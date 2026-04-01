#include <iostream>
#include <algorithm>

int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(NULL);

  long n;
  std::cin>> n;

  long A[n];
  for (long i = 0 ; i < n ; i++) {
    std::cin >> A[i];
  }
  std::sort(A, A + n);

  long m,x;
  std::cin >> m;
  for (long i = 0 ; i < m ; i++) {
    std::cin >> x;
    long st = 0;
    long en = n;

    int s;
    while (st < en) {

      long mid = (st+en) / 2;
      if (A[mid] >= x) {
        en = mid;
      } else {
        st = mid + 1;
      }

    }

    s = st;

    st = 0;
    en = n;

    int e;
    while (st < en) {
      long mid = (st+en) / 2;
      if (A[mid] <= x) {
        st = mid + 1;
      } else {
        en = mid;
      }
    }
    e = en;
    std::cout << e-s << " ";
  }

}