#include <iostream>
#include <algorithm>

int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(0);
  long long n, m;
  std::cin >> n >> m;

  long long arr[10001];
  for (long long i = 0 ; i < n ; i ++) {
    std::cin >> arr[i];
  }
  std::sort(arr, arr + n);

  for (long long i = 0 ; i < m ; i++) {
    long long x,y;
    std::cin >> x >> y;


    std::cout <<std::upper_bound(arr, arr + n, y) - std::lower_bound(arr, arr + n, x) << '\n';


    
  }

}