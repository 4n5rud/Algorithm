#include <algorithm>
#include <iostream>

int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(0);
  long long int n, m;
  std::cin >> n >> m;

  long long int router[n + 1];


  for (long long int i = 0 ; i < n ; i ++ ) {
    std::cin >> router[i];
  }

  std::sort(router, router + n);
  int st = 0;
  int en = n - 1;
  int max_gap = 1;
  for (int i = 1 ; i < m ; i++) {
    while (st < en) {
      int mid = (en + st) / 2;

      int st_mid_gap = abs(router[st] - router[mid]);
      int mid_en_gap = abs(router[mid] - router[en]);

      if (max_gap <= st_mid_gap && max_gap <= mid_en_gap) {
        st = mid;

        break;
      } else if (max_gap <= mid_en_gap && max_gap > st_mid_gap) {
        st = mid + 1;
      } else if (max_gap <= st_mid_gap && max_gap > mid_en_gap) {
        en = mid - 1;
      } else {
        std::cout << max_gap;
        return 0;
      }

    }

    max_gap++;
  }
}


// 생각
// n = 5
// m = 3
//
// 1 2 4 8 9
// st = 0 (1)
// en = 4(9)
// max_gep =  (9-1) = 8
// m - 2번 반복 (st와 en에는 이미 공유기를 깐 상태로 치기 때문에 2개 제외)
//
// 반복 1회차
// st = 0(1)
// en = 4(9)
// max_gap = 8
// mid = 2(4)
//
// 4에 깔았을 때
// st와 en을 기준으로 사잇값 최대가 얼마인지 계산
//
// abs(9 - 4) / abs(1 - 4)
// en ~ mid = 5
// st ~ mid = 3
//
// 깔아 버리고
//
// 어떠한 기준에 따라서 en이나 st 위치를 변경해야 할 것 같음
// en간격이 더 크니까 st = mid + 1로 바꾸고 else 로 en = mid - 1


//2차 고민
// 저런식으로 문제를 해결하려고 하니까 지조때로 뛰어넘어버림 mid + 1 mid - 1로 인해서;
// 어케해야하냐


