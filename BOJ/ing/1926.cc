#include <iostream>
#include <stack>
#include <algorithm>
int main() {
  int n, m;
  std::cin >> n >> m;

  int dx[4] = {1, 0 , -1, 0};
  int dy[4] = {0, 1, 0, -1};

  int art[n][m];
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      std::cin >> art[i][j];
    }
  }

  bool vis[n][m];
  std::fill(&vis[0][0], &vis[0][0] + (n * m), false);


  int count = 0;
  int max_size = 0;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {


      if (vis[i][j] == false && art[i][j] == 1) {
        int cnt = 0 ;
        count++;
        std::stack<std::pair<int , int>> stack;
        stack.push({i,j});
        vis[i][j] = true;

        while (!stack.empty()) {
          std::pair<int , int> p = stack.top();
          stack.pop();
          cnt++;
          for (int i = 0 ; i < 4 ; i++) {
            int nx = p.first + dx[i];
            int ny = p.second + dy[i];
            if (nx < 0 || nx >= n || ny < 0 || ny >= m) {
              continue;
            }
            if (vis[nx][ny] == true || art[nx][ny] == 0) {
              continue;
            }
            vis[nx][ny] = true;
            stack.push({nx, ny});
          }
        }

        if (cnt >= max_size) {
          max_size = cnt;
        }
      }

    }
  }

  std::cout << count << '\n' << max_size;


}