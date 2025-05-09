#include <bits/stdc++.h>

using namespace std;

void dfs(int x, int y, vector<vector<char>> &grid, vector<vector<bool>> &visited, int n, int m) {
    if (x < 0 || x >= n || y < 0 || y >= m || grid[x][y] == '#' || visited[x][y]) {
        return;
    }

    visited[x][y] = true;
    dfs(x - 1, y, grid, visited, n, m);
    dfs(x + 1, y, grid, visited, n, m);
    dfs(x, y - 1, grid, visited, n, m);
    dfs(x, y + 1, grid, visited, n, m);
}

int countRooms(vector<vector<char>> &grid, int n, int m) {
    vector<vector<bool>> visited(n, vector<bool>(m, false));
    int roomCount = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (grid[i][j] == '.' && !visited[i][j]) {
                dfs(i, j, grid, visited, n, m);
                roomCount++;
            }
        }
    }

    return roomCount;
}

int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<char>> grid(n, vector<char>(m));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> grid[i][j];
        }
    }

    cout << countRooms(grid, n, m) <<'\n';

    return 0;
}