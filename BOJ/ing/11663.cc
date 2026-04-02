#include <iostream>
#include <algorithm>

int main() {
  int n, m;
  std::cin >> n >> m;

  int arr[1000001];
  for (int i = 0 ; i < n ; i ++) {
    std::cin >> arr[i];
  }
  std::sort(arr, arr + n);

  for (int i = 0 ; i < m ; i++) {
    int x,y;
    std::cin >> x >> y;

    // int cnt = 0;
    // while (x <= y) {
    //   int mid = (x+y)/2;
    //
    //   if (mid == arr[mid]) {
    //     cnt++;
    //   } else if (mid > arr[mid]) {
    //
    //   } else if (mid < arr[mid]) {}
    // }
    
  }

}