#include <iostream>
#include <math.h>

int main() {
  long long int n;
  std::cin >> n;

  if (n == 0 ) {
    std::cout << "0";
    return 0;
  }
  long long int st = 1;
  long long int en = n;
  long long int mid;
  int r;
  while (st < en) {
    mid = (en + st) / 2;

    long long sqrt = pow(mid, 2);
    if (sqrt >= n || sqrt < 0) {
      en = mid - 1;
      r= mid;
    } else {
      st = mid + 1;
    }
  }

  std::cout << r;
}
