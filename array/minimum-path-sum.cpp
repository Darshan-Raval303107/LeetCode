class Solution {
public:
    int solve(vector<vector<int>>& grid, int i, int j, int m, int n) {
        if (i >= m || j >= n)
            return INT_MAX;

        if (i == m - 1 && j == n - 1)
            return grid[i][j];

        int right = solve(grid, i + 1, j, m, n);
        int down  = solve(grid, i, j + 1, m, n);

        int ans = min(right, down);

        if (ans == INT_MAX) return INT_MAX;

        return grid[i][j] + ans;
    }

    int minPathSum(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();

        return solve(grid, 0, 0, m, n);
    }
};