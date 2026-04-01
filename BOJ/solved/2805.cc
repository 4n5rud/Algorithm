#include <iostream>
#include <algorithm>


int main() {
  long long int n, wantM;
  long long int trees[100001];
  long long int result = 0;

  std::cin >> n >> wantM;
  
  std::sort(trees, trees + n);
  for (long long int i = 0 ; i < n; i ++) {
    std::cin >> trees[i];
  }

  long long int st = 0;
  long long int en = *std::max_element(trees, trees + n);
  while (st <= en) {
    long long int mid = (st + en) / 2;

    long long int miter = 0;
    for (long long int i = 0 ; i < n ; i ++) {
      if (trees[i] > mid) {
        miter += (trees[i] - mid < 0 ? 0 : trees[i] - mid);
      }
    }
    if (miter >= wantM) {
      st = mid + 1;
      if (result < mid) {
        result = mid;
      }
    } else if (miter < wantM) {
      en = mid - 1;
    }
  }


  std::cout << result;
}