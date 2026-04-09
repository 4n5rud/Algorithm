#include <iostream>
#include <queue>


int main() {
  int n, m;
  std::cin >> n >> m;

  int arr[n][m];
  int path[n][m];
  int dx[4] = {-1, 0, 1, 0};
  int dy[4] = {0, 1, 0, -1};

  for (int i = 0 ; i < n ; i++) {
    std::fill(path[i], path[i] + m , -1);
  }

  for (int i = 0; i < n; i ++) {
    std::string t;
    std::cin >> t;
    for (int j = 0; j < m; j ++) {
      arr[i][j] = t[j] - '0';
    }
  }

  std::queue<std::pair<int, int>> q;
  q.push({0,0});
  path[0][0] = 1;
  while (!q.empty()) {
    std::pair<int, int> p = q.front();
    q.pop();
    for (int i = 0 ; i < 4 ; i++) {
      int nx = p.first + dx[i];
      int ny = p.second + dy[i];

      if (nx < 0 || nx >= n || ny < 0 || ny >= m) {
        continue;
      }

      if (path[nx][ny] != -1 || arr[nx][ny] != 1) {
        continue;
      }

      path[nx][ny] = path[p.first][p.second] + 1;
      q.push({nx, ny});
    }
  }

  std::cout << path[n-1][m-1];
}
