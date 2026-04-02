#include <iostream>
#include <algorithm>


int main() {

  long long X,Y;
  std::cin >> X >> Y;

  long long st = 1;
  long long en = X;
  long long result = -1;

  long long first_winrate = Y  * 100 / X;

  while (st <= en) {
    long long mid = (st + en) / 2;

    long long tmpx = X + mid;
    long long tmpy = Y + mid;
    long long tmp_winrate = tmpy * 100 / tmpx;

    if (tmp_winrate != first_winrate) {
      result = mid;
      en = mid - 1;
    } else {
      st = mid + 1;
    }
  }

  std::cout << result;
}