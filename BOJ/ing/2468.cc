#include <algorithm>
#include <iostream>
#include <queue>
#include <cstring>
int dx[4] = {1, 0, -1, 0};
int arr[1001][1001];
bool vis[1001][1001];
int dy[4] = {0, -1, 0, 1};
int main() {
  int n;

  std::cin >> n;

  int max_h = 0;
  for (int i = 0 ; i < n ; i ++) {
    for (int j = 0 ; j < n ; j++) {
      std::cin >> arr[i][j];
      if (max_h < arr[i][j]) {
        max_h = arr[i][j];
      }
    }
  }

  int max = 0;
  while (max_h != 0){
    memset(vis, false, sizeof(vis));
    int cnt = 0;
    max_h--;

    for (int i = 0 ; i < n ; i++) {
      for (int j = 0 ; j < n ; j++) {
        std::queue<std::pair<int, int>> q;
        if (arr[i][j] > max_h && !vis[i][j]) {
          cnt++;
          vis[i][j] = true;
          q.push({i, j});

          while (!q.empty()) {
            std::pair<int, int> p = q.front();
            q.pop();

            for (int k = 0 ; k < 4 ; k++) {
              int nx = p.first + dx[k];
              int ny = p.second + dy[k];

              if (nx < 0 || nx >= n || ny < 0 || ny >= n) {
                continue;
              }

              if (vis[nx][ny] || arr[nx][ny] < max_h) {
                continue;
              }

              q.push({nx, ny});
              vis[nx][ny] = true;
            }
          }
        }
      }
    }
    if (cnt > max) {
      max = cnt;
    }

  }
  std::cout << max;
}
